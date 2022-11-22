#include "main.h"

/**
 * _strcpy - function to copy strings
 * @dest: the copy destination
 * @src: the string wanted to get copy
 * Return: always fking dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\n')
		*dest++ = *src++;
	*dest = '\n';
	return (dest);
}
