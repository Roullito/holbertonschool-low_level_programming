#include "main.h"

/**
 * main - Entry point, handles arguments and calls copy function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits with error code on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	return (cp_files(argv[1], argv[2]));
}

/**
 * cp_files - Coordinates opening, copying and closing of files
 * @file_from: source filename
 * @file_to: destination filename
 *
 * Return: 0 on success
 */
int cp_files(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;

	open_files(file_from, file_to, &fd_from, &fd_to);
	copy_content(fd_from, fd_to);
	close_files(fd_from, fd_to);

	return (0);
}

/**
 * open_files - Opens source and destination files
 * @file_from: source file name
 * @file_to: destination file name
 * @fd_from: pointer to source file descriptor
 * @fd_to: pointer to destination file descriptor
 */
void open_files(const char *file_from, const char *file_to, int *fd_from, int *fd_to)
{
	*fd_from = open(file_from, O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	*fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		close(*fd_from);
		dprintf(2, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
}

/**
 * copy_content - Reads from source and writes to destination file
 * @fd_from: file descriptor for source file
 * @fd_to: file descriptor for destination file
 */
void copy_content(int fd_from, int fd_to)
{
	char *buffer;
	ssize_t read_count, write_count;

	buffer = malloc(1024);
	if (buffer == NULL)
	{
		close(fd_from);
		close(fd_to);
		exit(99);
	}

	while ((read_count = read(fd_from, buffer, 1024)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count != read_count)
		{
			free(buffer);
			close(fd_from);
			close(fd_to);
			dprintf(2, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (read_count == -1)
	{
		free(buffer);
		close(fd_from);
		close(fd_to);
		dprintf(2, "Error: Can't read from file\n");
		exit(98);
	}

	free(buffer);
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
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
