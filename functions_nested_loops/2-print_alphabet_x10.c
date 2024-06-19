#include "main.h"

/**
 * print_alphabet_x10 - Print : the alphabet ten time
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 0; i < 10; i++)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n')
	}
}
