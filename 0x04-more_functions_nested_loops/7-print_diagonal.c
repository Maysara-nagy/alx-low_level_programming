#include "main.h"

/**
 * print_diagonal - print / diagonal
 * @n: number of rows
 */

void print_diagonal(int n)
{
	int x, y;

	x = 1;
	y = 1;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (x <= n)
		{
			while (y <= x)
			{
				_putchar(' ');
				y++;
			}
			x++;
		}
		_putchar('\\');
		_putchar('\n');
		y = 1;
	}
}
