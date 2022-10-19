#include "main.h"

/**
 * _isalpha - check for alphabetic chars
 * Return: always 0 or 1
 * @c: char will be checked is int
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
