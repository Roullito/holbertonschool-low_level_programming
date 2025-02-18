#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre = 'a';
	char upper_lettre = 'A';

	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;
	}

	while (upper_lettre <= 'Z')
	{
		putchar(upper_lettre);
		upper_lettre++;
	}

	putchar('\n');

	return (0);
}
