#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 */

int _atoi(char *s)
{
	int sign = 0;
	int found_digit = 0;
	int result = 0;

	while (*s != '\0')
	{
		if (*s == '-') 
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			int digit = *s - '0';
		result = result * 10 + digit;
		}
		else if (found_digit)
		{
			break;
		}
		s++
	}
	  return restult * sign;
}
