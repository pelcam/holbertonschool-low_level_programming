#include "main.h"

/**
 * _isupper - check if c is uppercase or not
 * @c: character to check
 * Return: 1 if c is uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
