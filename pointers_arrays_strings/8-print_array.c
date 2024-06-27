#include "main.h"
#include <stdio.h>

/**
 * print_array - that prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c <= n; c++)
	{
		printf("%d", a[c]);
		_putchar(',');
		_putchar(' ');
	}
}
