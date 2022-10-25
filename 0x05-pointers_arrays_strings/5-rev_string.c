#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: array or pointer
 */

void print_rev(char *s)
{
	int i = 9;
	int j = 0;
	int tmp;

	while (j <= i)
	{
		j++;
		tmp = *(s + i);
		*(s + j) = *(s + i);
		*(s + j) = tmp;
	}
}
