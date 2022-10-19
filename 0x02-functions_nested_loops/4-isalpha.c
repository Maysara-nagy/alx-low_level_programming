#include "main.h"

/**
 * _isalpha - check for alphabetic chars
 * Return: always 0 or 1
 * @c: char will be checked is int
 */

int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
