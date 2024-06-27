#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string we operate from
 */

void puts2(char *str)
{
	int c;

	for (c = 0; tr[c] != '\0'; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
