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
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
		{
			printf("%d \n", a[i]);
		}
		i++;
	}
}
