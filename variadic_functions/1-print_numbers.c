#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between each numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(list, int));
	}
	printf("\n");
	va_end(list);
}
