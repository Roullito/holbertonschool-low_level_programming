#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup -function that returns a pointer to a newly allocated space
 * @str: pointeur vers une chaine
 * Return: str
 */

char *_strdup(char *str)
{
	int i;
	char *copy_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	copy_str = malloc((i + 1) * sizeof(char));

	if (copy_str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		copy_str[i] = str[i];
	}

	return (copy_str);
}
