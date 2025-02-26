#include "main.h"

/**
 * puts_half - function should print the second half of the string
 *
 * @str: address de "0" dans "0123456789"
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int start;
	int i;

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}

	else
	{
		start = (len + 1) / 2;
	}

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
