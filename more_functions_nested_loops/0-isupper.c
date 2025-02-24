#include "main.h"
#include <stdio.h>

/**
 * _isupper - vérifie si un charactère est maj ou min
 *
 * @c: A ou a
 *
 * Return: 1 si maj 0 si min
 *
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else if (c >= 97 && c <= 122)
	{
		return (0);
	}

	return (-1);
}
