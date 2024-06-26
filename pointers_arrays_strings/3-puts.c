#include "main.h"

/**
 * _puts - print a string in stdout, followed by a new line
 * @str: string to print
 */

void _puts(char *str)
{
	int my_char;

	for (my_char = 0; str[my_char] != '\0'; my_char++)
	{
		_putchar(str[my_char]);
	}
	_putchar('\n');
}
