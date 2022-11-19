#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array
 * Return: null if size = 0
 * @size: size of array
 * @c: char to initialize the array with
 */

char *create_array(unsigned int size, char c)
{
	int *s;

	s = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	s[0] = c;
}
