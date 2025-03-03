#include "main.h"

/**
* *_memset - function that fills memory with a constant byte.
* @s: buffer[98]
* @b: 0x01
* @n: 95
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}
