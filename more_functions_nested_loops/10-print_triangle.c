#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size: size of the triangle printed
 */

void print_triangle(int size)
{
	int l, e, t;

	if (size <= 0)
		_putchar('\n');
	else
		for (l = 0; l < size; l++)
		{
			for (e = size; e > 0; e--)
			{
				_putchar(' ');
			}
			for (t = 0; t < size; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
