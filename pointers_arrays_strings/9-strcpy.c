#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 *
 * @a: pointeur to address of array[0]
 * @n: number of array
 *
 * Return: char.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}