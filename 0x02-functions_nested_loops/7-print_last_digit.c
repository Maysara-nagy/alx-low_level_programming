#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: number to print his last digit
 * Return: alwyas0
 */

int print_last_digit(int n)
{
	int sum = n % 10;

	if (n < 0)
	{
		_putchar(-sum + '0');
		return (_putchar(-sum + '0'));
	}
	else
	{
		_putchar(sum + '0');
		return (_putchar(sum + '0'));
	}
}
