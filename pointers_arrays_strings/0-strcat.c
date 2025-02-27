#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: s1 = "hello"
 * @src: s2 = "worls!"
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int i2;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (i2 = 0; src[i2] != '\0'; i2++)
	{
		dest[i] = src[i2];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
