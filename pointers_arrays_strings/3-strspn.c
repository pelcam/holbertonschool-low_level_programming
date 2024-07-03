#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: 
 * @accept:
 * Return:
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int f;
	char *a;

	while (*s)
	{
		f = 0;

		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				f = 1;
				break;
			}
		}
		if (!f)
		{
			break;
		}
		c++;
		s++;
	}
	return (c);
}
