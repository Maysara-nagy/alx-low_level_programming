#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to return the sum of all its parameters
 * Return: 0
 * @n: args number
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
