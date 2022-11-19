#include "main.h"

/**
 * puts2 - function to print other chars in string
 * @str: the array of chars
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
