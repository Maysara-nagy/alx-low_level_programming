#include <stdio.h>

/**
 * main - entery level
 * Return: lol
 */

int main(void)
{
	int n = 2;

	printf("1");
	while (n <= 100)
	{
		printf(" ");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
