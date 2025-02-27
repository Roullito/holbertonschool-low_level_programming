#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: s1[] = "hello"
 * @src: s2[] = "world!"
 * @n: n bytes from src.
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int i2;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (i2 = 0; i2 < n && src[i2] != '\0'; i2++)
	{
		dest[i] = src[i2];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
