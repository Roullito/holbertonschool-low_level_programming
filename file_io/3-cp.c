#include "main.h"

/**
 * cp_files - Coordinates opening, copying and closing of files
 * @file_from: source filename
 * @file_to: destination filename
 *
 * Return: 0 on success
 */
int cp_files(const char *file_from, const char *file_to)
{
	int fd_from = open_file_from(file_from);
	int fd_to = open_file_to(file_to, fd_from);

	copy_content(fd_from, fd_to, file_to);
	close_files(fd_from, fd_to);

	return (0);
}

/**
 * open_file_from - Opens the source file
 * @file_from: name of the file to read
 *
 * Return: file descriptor of the opened file
 */
int open_file_from(const char *file_from)
{
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	return (fd_from);
}

/**
 * open_file_to - Opens the destination file
 * @file_to: name of the file to write to
 * @fd_from: file descriptor of the source file, to close in case of error
 *
 * Return: file descriptor of the opened file
 */
int open_file_to(const char *file_to, int fd_from)
{
	int fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (fd_to);
}

/**
 * copy_content - Reads from source and writes to destination file
 * @fd_from: file descriptor for source file
 * @fd_to: file descriptor for destination file
 * @file_to: name of destination file (for error messages)
 */
void copy_content(int fd_from, int fd_to, const char *file_to)
{
	char buffer[1024];
	ssize_t read_count, write_count;

	while ((read_count = read(fd_from, buffer, 1024)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count != read_count)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (read_count == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_files - Closes both file descriptors and handles errors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
