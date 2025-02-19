#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Return: (return 1) (return 0)
 * Returns 1 if it's lowercase
 * Returns 0 otherwise
 * @c : C'est un paramètre local.
 * Il reçoit une copie de l'argument lors de l'appel ('H', 'o', 108)
 * Il est indépendant de r.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		(return 1);
	}

	else
	{
		(return 0);
	}
}
