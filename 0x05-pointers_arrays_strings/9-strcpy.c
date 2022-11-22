#include "main.h"

/**
 * _strcpy - function to copy strings
 * @dest: the copy destination
 * @src: the string wanted to get copy
 * Return: always fking dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
