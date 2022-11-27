#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to print all strings
 * @separator: the separator sting
 * @n: the number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (separator && i != n - 1)
		{
			printf("%s%s", (p == NULL) ? "(nill)" : p, separator);
		}
	}
	printf("\n");
	va_end(args);
}
