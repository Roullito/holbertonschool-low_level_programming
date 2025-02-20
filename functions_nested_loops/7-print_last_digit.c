#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @j: The variable to stock the last digit.
 *
 * Return: The last digit (j).
 */

int print_last_digit(int j)

{
	int last_digit;

	last_digit = j % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');

	return (0);
}
