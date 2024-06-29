#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of element of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, l, tmp;

	for (l = n - 1; l > i; l--)
	{
		tmp = a[l];
		a[l] = a[i];
		a[i] = tmp;
		i++;
	}
}
