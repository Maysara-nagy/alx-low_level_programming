#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a != 9)
		{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
		}
		else
			putchar(a + '0');
		a++;
	}
	putchar('\n');
}
