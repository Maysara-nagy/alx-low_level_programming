#include "main.h"

/**
 * puts_half - function to primts half of a string
 * @str: the array
 */

void puts_half(char *str)
{
	int length = 0;
	int i = 0;
	int j, n;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	j = length / 2;
	(void)n;
	if (length % 2 != 0)
	{
		int n = (length - 1) / 2;

		(void)n;
		while (n < length)
		{
			_putchar(str[n]);
			n++
		}
	}
	else
	{
		while (j < length)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
