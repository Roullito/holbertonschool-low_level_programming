#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: 98
 * @b: 42
 *
 * @*a: pointe vers a grace à l'adress &a et change la value en 42
 * @*b: pointe vers b grace à l'adress &b et change la value en 98
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int a1;

	a1 = *a;
	*a = *b;
	*b = a1;
}
