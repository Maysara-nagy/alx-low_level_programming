#include "main.h"

/**
 * more_numbers - bla bla
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j <=14)
		{
			_putchar(j + '0');
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
