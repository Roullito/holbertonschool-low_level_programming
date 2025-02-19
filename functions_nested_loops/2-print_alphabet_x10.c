#include "main.h"

/**
 * print_alphabet_x10 - prints alphax10 in lowercase, followed by a new line.
 * Return: Nothing (void)
 */

void print_alphabet_x10(void)
{
	for (int compteur = 0; compteur < 10; compteur++)
	{
		for (char lettre = 'a'; lettre <= 'z'; lettre++)
		{
			_putchar(lettre);
		}
		_putchar('\n');
	}
}
