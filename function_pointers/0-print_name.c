#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
