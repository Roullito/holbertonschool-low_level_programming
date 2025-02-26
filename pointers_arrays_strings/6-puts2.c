#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: address de "0" dans "0123456789"
 *
 * Return: void
 */

void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index %	2 == 0)
		{
			_putchar(str[index]);
		}
	}

	_putchar('\n');
}
