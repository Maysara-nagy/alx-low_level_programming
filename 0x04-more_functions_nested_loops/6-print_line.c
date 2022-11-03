#include "main.h"

/**
 * main : entery point
 * @n: an number of - should we print
 * print_line : function to print line
 */

void print_line(int n)
{
	for (int i = 1 ; i <= n ; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n')
}
