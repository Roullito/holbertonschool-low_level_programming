#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 *
 * @n: number of time to print _
 *
 * Return: void fonction
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
