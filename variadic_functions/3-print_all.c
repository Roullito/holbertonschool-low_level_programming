#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: chaine contenat des caractère qui indiquent -
 * quel type de valeur afficher
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, sep = 1;
	char *str;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (!sep)
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;

		case 'i':
			printf("%d", va_arg(args, int));
			break;

		case 'f':
			printf("%f", va_arg(args, double));
			break;

		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;

		default:
			sep = 1;
			i++;
			continue;
		}
		sep = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}
