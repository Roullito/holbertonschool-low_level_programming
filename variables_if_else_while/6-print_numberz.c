#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_number = '0';

	while (digit_number <= '9')
	{
		putchar(digit_number);
		digit_number++;
	}

	putchar('\n');

	return (0);
}
