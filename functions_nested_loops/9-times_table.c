#include "main.h"

/**
 * times_table - prints the nine times table, starting with zero
 * Return: 0
 */

void times_table(void)
{
	int f1, f2, prd;

	for (f1 = 0; f1 <= 9; f1++)
	{
		for (f2 = 0; f2 <= 9; f2++)
		{
			prd = f1 * f2;
			_putchar(prd + '0');
			if (f2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
