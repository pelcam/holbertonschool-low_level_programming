#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size: size of the triangle printed
 */

void print_triangle(int size)
{
	int l, e, h;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (e = 1; e < (size - l); e++)
			{
				_putchar(' ');
			}
			for (h = 0; h <= (size - e); h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
