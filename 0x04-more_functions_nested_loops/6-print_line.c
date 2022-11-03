#include "main.h"

/**
 * print_line - function to print line
 * @n: an number
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (int i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}

}
