#include <main.h>

/**
 * _isupper - function to check if uppercase or not
 * Return: return 1 if c is uppercase
 * @c: parameter to checked
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
		return (0);
}
