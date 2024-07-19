#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
		{
			str = "(nil)";
		}

		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%s", str);
	}
	printf("\n");
	va_end(list);
}
