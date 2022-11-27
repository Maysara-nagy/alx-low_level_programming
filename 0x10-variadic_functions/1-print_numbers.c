#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @n: number of arguments
 * @separator: string to seperate between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s%u", separator, va_arg(args, int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
		}
	}
	va_end(args);
	printf("\n");
}
