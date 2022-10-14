#include <stdio.h>
/**
* main - entry point
* Return: always 0
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("Size of an int: %ld byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int", sizeof(long long int));
	printf("Size of a float:", sizeof(float));
	return (0);
}

