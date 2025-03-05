#include "main.h"

/**
 * _pow_recursion - Function returns x raised to the power of y.
 * @x: variable
 * @y: puissance
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);


	return (x * _pow_recursion(x, y - 1));
}
