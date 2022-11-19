#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: array or pointer
 */

void rev_string(char *s)
{
	int i = 0;
	int count = 0;
	int j = 0;
	int tmp;

	while (*(s + i))
	{
		count++;
		i++;
	}
	*s = tmp;
	while (j < count)
	{
		*(s + j) = *(s + count - 1);
		j++;
		count--;
	}
	tmp = *(s + j);
}
