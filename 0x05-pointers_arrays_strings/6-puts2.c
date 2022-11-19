#include "main.h"

/**
 * puts2 - function to print other chars in string
 * @str: the array of chars
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i + 2]);
		i++;
	}
	_putchar('\n');
}
