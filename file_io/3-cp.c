#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * close_file - Close a file descriptor, with error handling
 * @fd: The file descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * handle_copy - Copy content from source to destination
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @file_from: Source file name (for error reporting)
 * @file_to: Destination file name (for error reporting)
 */
void handle_copy(int fd_from, int fd_to,
	const char *file_from, const char *file_to)
{
	char buffer[1024];
	ssize_t b_read, b_written;

	while ((b_read = read(fd_from, buffer, 1024)) > 0)
	{
		b_written = write(fd_to, buffer, b_read);
		if (b_written != b_read)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}

	if (b_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close_file(fd_from);
		close_file(fd_to);
		exit(98);
	}
}

/**
 * main - Entry point, copies content from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2],
			O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		close_file(fd_from);
		exit(99);
	}

	handle_copy(fd_from, fd_to, argv[1], argv[2]);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
