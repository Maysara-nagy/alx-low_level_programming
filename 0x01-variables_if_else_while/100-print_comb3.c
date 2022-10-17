#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int a = 0;

	while (a < 100)
	{
		putchar(a + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
