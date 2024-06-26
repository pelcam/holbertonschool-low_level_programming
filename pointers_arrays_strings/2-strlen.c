#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\n')
		count++;
	return (count);
}
