#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for a digit
 *
 * @c: 0 ou a
 *
 * Return: 1 if it's digit 0 if not
 *
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
