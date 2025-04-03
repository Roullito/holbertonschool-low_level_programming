#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - append_text_to_file
 * @filename: pointer to name of file.
 * @text_content: content of the file
 * Return: -1, 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd;
	int write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		write_count = write(fd, text_content, i);
		if (write_count == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
