#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: character tested
 * Return: 0
 */

int _islower(int c)
{
	if ('a' >= c  && c <= 'z')
		return (1);
	else
		return (0);
}
