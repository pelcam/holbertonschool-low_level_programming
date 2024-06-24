#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of the diagonal
 */

void print_diagonal(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 0; c <= n; c++)
		{
			_putchar(92);
			_putchar('\n');
			_putchar(' ');
		}
	}
}
