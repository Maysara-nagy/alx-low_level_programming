#include <stdio.h>

/**
 * main - entry level
 * @argc: count
 * @argv: array of pointers
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
