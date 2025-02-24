#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: n time the fonction should work
 * Return: void.
 */

void print_diagonal(int n)
{
	int j;
	int space;

		for (j = 0; j < n; j++)
	{
		_putchar('\\');
		_putchar('\n');

		for (space = 0; space <= j; space++)
		{
			_putchar(' ');
		}
	}

	_putchar('\n');
}
