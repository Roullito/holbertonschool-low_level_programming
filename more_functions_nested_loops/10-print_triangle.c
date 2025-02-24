#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int x, y, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (x = 1; x <= size; x++)
	{
		for (spaces = size - x; spaces > 0; spaces--)
		{
			_putchar(' ');
		}

		for (y = 1; y <= x; y++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
