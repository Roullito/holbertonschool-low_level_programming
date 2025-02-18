#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa_number = '0';
	char hexa_lettre = 'a';

		while (hexa_number <= '9')
		{
			putchar(hexa_number);
			hexa_number++;
		}

		while (hexa_lettre <= 'f')
		{
			putchar(hexa_lettre);
			hexa_lettre++;
		}
putchar('\n');

	return (0);
}

