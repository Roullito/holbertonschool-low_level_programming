#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: stock l'adresse du pointeur qui stock l'adresse d'un char.
 * @to: stock l'adress d'un char.
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
