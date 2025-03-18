#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - fonction addition
 * @a: argument 1
 * @b: argument 2
 * Return: operation pour chaques
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - fonction soustraction
 * @a: argument 1
 * @b: argument 2
 * Return: operation pour chaques
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - fonction mul
 * @a: argument 1
 * @b: argument 2
 * Return: operation pour chaques
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fonction div
 * @a: argument 1
 * @b: argument 2
 * Return: operation pour chaques
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - fonction modulo
 * @a: argument 1
 * @b: argument 2
 * Return: operation pour chaques
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
