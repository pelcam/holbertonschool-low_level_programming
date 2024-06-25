#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size: size of the triangle printed
 */

void print_triangle(int size)
{
	int e, h;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (e = size - 1; e >= 0; e--);
	{
				_putchar(' ');
	}
		for (h = size - e; h <= size; h++)
	{
				_putchar('#');
	}
	}
}
