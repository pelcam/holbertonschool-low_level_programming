#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
	}
	return (count);
}
