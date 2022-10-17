#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int ch = 'a';
	int chUPPER = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (chUPPER <= 'Z')
	{
		putchar(chUPPER);
		chUPPER++;
	}
	putchar('\n');
	return (0);
}
