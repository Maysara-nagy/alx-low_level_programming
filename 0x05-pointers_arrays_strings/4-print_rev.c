#include "main.h"

/**
 * print_rev - function to reverse string
 * @s: array or pointer
 */

void print_rev(char *s)
{
	int i = 0;
	int j = i - 1;

	while (s[i] != '\0')
	{
		i++;
		while (j >= 0)
		{
			_putchar(s[j]);
			j--;
		}
	}
}
