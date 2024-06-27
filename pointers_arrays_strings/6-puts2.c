#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string we operate from
 */

void puts2(char *str)
{
	int c;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
		c++;
	}
	_putchar('\n');
}
