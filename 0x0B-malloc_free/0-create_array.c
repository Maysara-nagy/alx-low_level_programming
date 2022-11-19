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
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
