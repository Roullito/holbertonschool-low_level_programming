#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - function that prints strings
 * @separator: pointeur vers une chaine
 * @n: nombre d'arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			string = va_arg(args, char *);
			printf("%s", string);
			printf("%s", separator);
		}

		else
		{
			string = va_arg(args, char *);
			printf("%s", string);
		}
	}

	va_end(args);
	printf("\n");
}
