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

		for (space = 0; space < j; space++)
		{
			_putchar(' ');
		}

		if (j == (n - 1))
		{
			_putchar('\\');
		}

		else
		{
			_putchar('\\');
			_putchar('\n');
		}

	}

	_putchar('\n');
}
