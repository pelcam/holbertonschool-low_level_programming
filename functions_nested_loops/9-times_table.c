#include "main.h"

/**
 * times_table - prints the nine times table, starting with zero
 */

void times_table(void)
{
	int f1, f2, prd, u;

	for (f1 = 0; f1 <= 9; f1++)
	{
		for (f2 = 0; f2 <= 9; f2++)
		{
			prd = f1 * f2;
			if (prd <= 9)
			{
				_putchar(prd + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (prd >= 10)
			{
				u = prd % 10;
				_putchar(prd / 10);
				_putchar(u);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
