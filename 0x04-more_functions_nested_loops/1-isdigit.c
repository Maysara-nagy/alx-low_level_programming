#include "main.h"

/**
 * _isdigit - function to check if it digit or not
 * Return: 1 i c i digit
 * @c: the digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
