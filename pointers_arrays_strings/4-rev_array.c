#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointeur to a[]
 * @n: number of colomne in []
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp[n];
	int i;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n - 1 - i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
