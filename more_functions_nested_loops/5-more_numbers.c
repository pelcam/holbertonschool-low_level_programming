#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int n, r, d, u;

	for (r = 0; r < 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			d = n / 10;
			u = n % 10;
			if (n >= 10)
				_putchar(d + '0');
			_putchar(u + '0');
		}
		_putchar('\n');
	}
}
