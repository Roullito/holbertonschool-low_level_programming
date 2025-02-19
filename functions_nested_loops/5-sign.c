#include "main.h"

/**
 * print_sign - checks if n <, > ou == à 0.
 * Return: return (1) return (0) return (-1)
 * Returns 1 if it's greater
 * Returns 0 if it's 0
 * Returns -1 if it's lower
 * @n : C'est un paramètre local.
 * Il reçoit une copie de l'argument lors de l'appel
 * Il est indépendant de r.
 */

int print_sign(int n)

{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
