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
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0, 98);
	fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664, 99);

	copy_content(fd_from, fd_to, argv[1], argv[2]);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * open_file - Opens a file and handles errors
 * @filename: name of the file
 * @flags: flags for open()
 * @perm: permissions if file is created
 * @exit_code: code to exit on failure
 *
 * Return: file descriptor
 */
int open_file(const char *filename, int flags, int perm, int exit_code)
{
	int fd;

	if (flags & O_CREAT)
		fd = open(filename, flags, perm);
	else
		fd = open(filename, flags);

	if (fd == -1)
	{
		if (exit_code == 98)
			dprintf(2, "Error: Can't read from file %s\n", filename);
		else
			dprintf(2, "Error: Can't write to %s\n", filename);
		dprintf(1, "%d\n", exit_code);
		exit(exit_code);
	}

	return (fd);
}

/**
 * copy_content - Copies content from one file to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: source file name (for error messages)
 * @file_to: destination file name (for error messages)
 */
void copy_content(int fd_from, int fd_to,
		  const char *file_from, const char *file_to)
{
	char buffer[1024];
	ssize_t read_count, write_count;

	while ((read_count = read(fd_from, buffer, 1024)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count != read_count)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			dprintf(1, "99\n");
			exit(99);
		}
	}
	if (read_count == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		dprintf(1, "98\n");
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor and handles errors
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
