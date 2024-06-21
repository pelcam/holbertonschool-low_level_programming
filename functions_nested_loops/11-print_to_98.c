#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to a specified number
 * @n: number variable to set the starting point
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d", n);
			n--;
		}
		else
		{
			printf("%d", n);
			n++;
		}
	}
	printf("98");
	printf("\n");
}
