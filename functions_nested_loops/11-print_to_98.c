#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: 0 - 98 - 111 - -10
 *
 * Return: none
 */

void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
			printf("%d, ", n);
	}

	for (; n > 97; n--)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
			printf("%d, ", n);
	}

	printf("\n");
}

