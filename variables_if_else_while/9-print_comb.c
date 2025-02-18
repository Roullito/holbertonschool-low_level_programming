#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char single_digit_number = '0';

	while (single_digit_number <= '9')
	{
		putchar(single_digit_number);
		single_digit_number++;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

