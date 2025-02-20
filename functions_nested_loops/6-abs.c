#include "main.h"
#include <stdio.h>

/**
 * _abs -  computes  the absolute value of the integer argument.
 * @j : variable qui doit etre absolue.
 */

int _abs(int j)
{
	if (j < 0)
	{
		j = j/-1;
		return j;
	}

	else
	{
		return j;
	}
}

	
