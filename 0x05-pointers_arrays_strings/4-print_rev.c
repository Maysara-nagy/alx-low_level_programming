#include "main.h"

/**
 * print_rev - function to reverse string
 * @s: array or pointer
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
		while (i = i - 1 >= 0)
		{
			_putchar(*(s + i));
			i--;
		}
	}
}
