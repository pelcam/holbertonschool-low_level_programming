#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of given arguments 
 *
 * Return: the sum of all its parameters, and 0 if n is null
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i;
	int sum = 0;

	for(i = 0, i < n, i++)
	{
		va_arg(n, list);
		sum += 
	}
	if (n == 0)
		return (0);
	va_end(list);
	return (sum);
}
