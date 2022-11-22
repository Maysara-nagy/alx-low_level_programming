#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print the elements of array
 * @a: the array
 * @n: the size of array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d ,", a[i]);
		i++;
	}
	_putchar('\n');
}
