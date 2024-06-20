#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int dh, h, dm, m;

	for (dh = 0; dh <= 2; dh++)
	{
		for (h = 0; h <= 9; h++)
		{
			for (dm = 0; dm <= 5; dm++)
			{
				for (m = 0; m <= 9; m++)
				{
					_putchar(dh);
					_putchar(h);
					_putchar(dm);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
