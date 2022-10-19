#include "main.h"

/**
 * _islower - check if c is lowercase
 * Return: always 0
 * @c: the input c
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
		return (0);
}
