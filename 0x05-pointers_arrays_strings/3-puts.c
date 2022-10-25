#include "main.h"

/**
 * _puts - function to print a string in stdout
 * @str: the string itself
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
