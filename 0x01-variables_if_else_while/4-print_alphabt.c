#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'q' && ch != 'e') && ch <= 'z')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
