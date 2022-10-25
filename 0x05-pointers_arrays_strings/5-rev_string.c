#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: array or pointer
 */

void rev_string(char *s)
{
	int i = 9;
	int j = 0;
	char tmp;

	while (j <= i)
	{
		j++;
		tmp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = tmp;
	}
}
