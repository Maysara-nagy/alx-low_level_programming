#include <stdio.h>

/**
 * main - entry point
 * @argc: count
 * @argv: array of pointers to string
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Errorn\n");
	return (1);
}
