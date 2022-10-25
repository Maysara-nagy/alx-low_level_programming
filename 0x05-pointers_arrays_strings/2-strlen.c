#include "main.h"

/**
 * _strlen - function to print the lengh of string
 * @s: the string it self
 * Return: always the len
 */

int _strlen(*s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
