#include "main.h"

/**
 * jack_bauer - clock
 */

void jack_bauer(void)
{
	int h, m;

	h = 0;
	m = 0;
	while (h <= 23)
	{
		while (m <= 59)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			_m++;
		}
	m = 0;
	h++;
	}
}
