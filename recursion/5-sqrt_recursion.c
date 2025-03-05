#include "main.h"

/**
 * _sqrt_find_x - Fonction pour trouver x
 * @x: la racine carré de n
 * @n: variable transmise par _sqrt_recursion
 * Return: _sqrt_find_x(n, x + 1)
 */

int _sqrt_find_x(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_sqrt_find_x(n, x + 1));
}

/**
 * _sqrt_recursion - fonction pour tester x avec n
 * @n: variable transmise par main
 * Return: la racine carré
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_find_x(n, 1));
}
