#include <stdio.h>

/**
 * main - entry point
 * @argc: count
 * @argv: array of pointers ot string
 * Return: always 0
 */

int main(int argc, int *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
