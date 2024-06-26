#include "main.h"

/**
 * _puts - print a string in stdout, followed by a new line
 * @str: string to print
 */

void _puts(char *str)
{
	int my_char = 0;

	while (str[my_char]!= '\0')
	{
		_putchar(my_char);
		my_char++;
	}
	_putchar('\n');
}
