#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * close_file - Close a file descriptor with error handling
 * @fd: file descriptor to close
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
 * handle_copy - Copy data from one file descriptor to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: source file name (for errors)
 * @file_to: destination file name (for errors)
 */
void handle_copy(int fd_from, int fd_to,
	const char *file_from, const char *file_to)
{
	char buffer[1024];
	ssize_t b_read, b_written;

	while ((b_read = read(fd_from, buffer, 1024)) > 0)
	{
		b_written = write(fd_to, buffer, b_read);
		if (b_written == -1 || b_written != b_read)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to);
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}
	if (b_read == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		close_file(fd_from);
		close_file(fd_to);
		exit(98);
	}
}

/**
 * copiefile - Open, copy and close files
 * @file_from: source filename
 * @file_to: destination filename
 * Return: 0 on success
 */
int copiefile(const char *file_from, char *file_to)
{
	int fd_from, fd_to;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to);
		close_file(fd_from);
		exit(99);
	}

	handle_copy(fd_from, fd_to, file_from, file_to);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}

/**
 * main - Entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, or error code on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}
	return (copiefile(argv[1], argv[2]));
}
