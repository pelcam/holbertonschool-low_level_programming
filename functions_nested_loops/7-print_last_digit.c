#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: initial number
 * Return: 0
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;

	if (d < 0)
		d = -d;

	_putchar(d + '0');

	return (d);
}
