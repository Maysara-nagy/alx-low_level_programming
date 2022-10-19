#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: number to print his last digit
 * Return: alwyas0
 */

int print_last_digit(int n)
{
	int sum = n % 10;
	
	if (sum < 0)
		return (sum *= -1);
	else
		return (sum);
}
