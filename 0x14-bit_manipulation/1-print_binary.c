#include "main.h"

/**
 * print_binary - function to print the binary representation of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, mask;

	mask = 1UL << 63;
	if (n == 0)
		_putchar('0');
	for (i = 0; i < 64; i++)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask >>= 1;
	}
}
