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

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
			printf("(nil)");

		if (i != (n - 1))
		{
			printf("%s", string);
			printf("%s", separator);
		}

		else
		{
			printf("%s", string);
		}
	}

	va_end(args);
	printf("\n");
}
