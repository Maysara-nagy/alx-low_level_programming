#include "main.h"

/**
 * _abs - absolute value of an integer
 * Return: always n
 * @t: parameter
 */

int _abs(int t)
{
	if (t == 0)
		return (0);
	else if (t < 0)
		return (-t);
	else
		return (t);
}
