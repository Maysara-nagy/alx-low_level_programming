#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int a = 0;
	int b = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
