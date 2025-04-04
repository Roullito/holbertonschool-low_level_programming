#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * close_file - Closes a file descriptor and handles errors
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * check_args - Verifies the program arguments
 * @file_from: Source file
 * @file_to: Destination file
 */
void check_args(const char *file_from, char *file_to)
{
	if (file_from == NULL || file_to == NULL)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * handle_copy - Copies contents from one file to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @buffer: Buffer to hold data
 * @file_from: Source file name (for error message)
 * @file_to: Destination file name (for error message)
 */
void handle_copy(int fd_from, int fd_to, char *buffer,
		const char *file_from, const char *file_to)
{
	ssize_t b_read, b_written;

	b_read = read(fd_from, buffer, 1024);
	while (b_read > 0)
	{
		b_written = write(fd_to, buffer, b_read);
		if (b_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
			b_read = read(fd_from, buffer, 1024);
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
 * copiefile - Manages opening, copying, and closing files
 * @file_from: Source file name
 * @file_to: Destination file name
 * Return: 0 on success
 */
int copiefile(const char *file_from, char *file_to)
{
	int fd_from = -1, fd_to = -1;
	char buffer[1024];

	check_args(file_from, file_to);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close_file(fd_from);
		exit(99);
	}
	handle_copy(fd_from, fd_to, buffer, file_from, file_to);

	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
/**
 * main - point d'entrée du programme
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0 en cas de succès, ou un code d'erreur sinon
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (copiefile(argv[1], argv[2]));
}
