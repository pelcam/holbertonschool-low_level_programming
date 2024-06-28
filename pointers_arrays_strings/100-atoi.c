#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: result * sign
 */

int _atoi(char *s)
{
	int sign = 0;
	int result = *s;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else
		{
		}
		s++;
	}
	return (result * sign);
}
