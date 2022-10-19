#include "main.h"

/**
 * print_alphabet_x10 - printf alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int ch = 'a';
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n')
	}
}
