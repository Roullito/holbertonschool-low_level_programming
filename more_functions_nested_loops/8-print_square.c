#include "main.h"

/**
 * print_square - function that prints a square
 * @size: n time that print #
 * Return: void
 */

void print_square(int size)
{
	int i;
	int n;

	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
