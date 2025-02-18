#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa_number = '0';

	while (hexa_number <= 'F')
		{
			putchar(hexa_number);
			hexa_number++;
		}
		

	putchar('\n');

	return (0);
}

