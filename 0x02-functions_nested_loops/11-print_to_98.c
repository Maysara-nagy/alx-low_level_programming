#include "main.h"

/**
 * print_to_98 - print number to 98
 * @n: number passed
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
		_putchar(n + '0');
	_putchar('\n');
}
