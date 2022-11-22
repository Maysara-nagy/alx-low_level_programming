#include "main.h"

/**
 * puts_half - function to primts half of a string
 * @str: the array
 */

void puts_half(char *str)
{
	int length;
	int i = 0;
	int j, n;

	while (*(str + i) != '\0')
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
		_putchar('n');
	}
	else
	{
		while (j <= i)
		{
			_putchar(str[j]);
			j++;
		}
	}
}
