#include "main.h"

/**
 * print_alphabet - printf alphabet in lowercase
 */
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch + '0');
		ch++;
	}
	_putchar('\n');
}
