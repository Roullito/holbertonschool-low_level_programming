#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: void fonction.
 */

void print_numbers(void)

{
	int i = 0;

	while (i < 9)

	{
		i++;
		_putchar(i + '0');
		_putchar('\n');
	}
}
