#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to output.
 * @filename: pointer to name of the file
 * @letters: number of char to read and print
 * Return: 0, write_count
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t read_count;
	ssize_t write_count;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	read_count = read(fd, buffer, letters);
	write_count = write(STDOUT_FILENO, buffer, read_count);

	if (read_count == -1)
	{	free(buffer);
		return (0);
	}

	if (write_count != read_count)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (write_count);

}
