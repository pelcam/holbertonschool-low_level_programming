#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: result * sign
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int r = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s <= '0' && *s >= '9') 
		{
			r = (r *  10) + (*s - '0');
		}
		else
		{
			break;
		}
	} while 
	(*s++);

	return (sign * r);
}
