#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  function that prints a name.
 * @name: pointeur vers un char (Bob et Bob dylan)
 * @f: pointeur vers une fonction (as_is et upper)
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
