#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 * @j: The integer to compute the absolute value for.
 *
 * Return: The absolute value of the integer j.
 */

int _abs(int j)

{
	if (j < 0)
	{
		j = j / -1;
		return (j);
	}

	else
	{
		return (j);
	}
}
