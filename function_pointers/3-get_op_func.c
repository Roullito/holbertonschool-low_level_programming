#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - function that selects the correct function for the operation
 * @s: pointeur vers un char argv
 * Return: NULL si correspond à aucun operateur, ops[i].f si correspond
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	    };
	    int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
