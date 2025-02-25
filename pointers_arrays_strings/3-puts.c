#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str: address of charactere of the string
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
