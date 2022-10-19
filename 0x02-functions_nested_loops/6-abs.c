#include "main.h"

/**
 * _abs - absolute value of an integer
 * Return: always n
 * @t: parameter
 */

int _abs(int t)
{
	int sum = t * (-1);

	if (t == 0)
		return (_putchar('0'));
	else if (t < 0)
		return (_putchar(sum + '0'));
	else
		return (_putchar(t + '0'));
}
