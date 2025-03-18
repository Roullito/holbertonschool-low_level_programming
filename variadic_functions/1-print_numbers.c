#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_numbers - function that prints numbers
 * @separator: pointeur vers un char (", ")
 * @n: nombre d'arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			num = va_arg(args, int);
			printf("%d", num);
		}

		else
		{
			num = va_arg(args, int);
			printf("%d%s", num, separator);
		}
	}

	va_end(args);
	printf("\n");
}
