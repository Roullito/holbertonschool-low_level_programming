#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * Return: (return 1) (return 0)
 * Returns 1 if it's alpha
 * Returns 0 otherwise
 * @c : C'est un paramètre local.
 * Il reçoit une copie de l'argument lors de l'appel ('H', 'o', 108)
 * Il est indépendant de r.
 */

int _isalpha(int c)

{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
