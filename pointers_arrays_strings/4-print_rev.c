#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: address of charactere of the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		s++;
	}

	while (s != start)
	{
		s--;
		_putchar(*s);
	}

	_putchar('\n');
}
