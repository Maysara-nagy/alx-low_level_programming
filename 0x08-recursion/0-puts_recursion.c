#include "main.h"

/**
 * _puts_recursion - balbal
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		retrun;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
