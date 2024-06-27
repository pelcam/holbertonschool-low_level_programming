#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int l, n, d;

	while (l != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l - 1) / 2;
	for (d = n; str[d] != '\0'; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
