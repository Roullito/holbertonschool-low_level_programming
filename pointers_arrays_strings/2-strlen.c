#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: copie de l'adresse contenue dans str
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
