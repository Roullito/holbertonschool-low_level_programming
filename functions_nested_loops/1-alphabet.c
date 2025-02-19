#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Nothing (void)
 */

void print_alphabet(void)
{

	char lettre = 'a';

	while (lettre <= 'z')

	{
		_putchar(lettre);
		lettre++;
	}

	_putchar('\n');

}

int main(void)
{
    print_alphabet();
    return (0);
}
