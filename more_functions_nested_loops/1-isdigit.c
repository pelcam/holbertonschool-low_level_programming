#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: character to check
 * Return: 1 if digit, 0 else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
