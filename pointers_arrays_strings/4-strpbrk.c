#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: substring
 * @accept: characters accepted
 * Return: c
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int c = 0;
	int f;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			f = 0;
			if (*s == *a)
			{
				f = 1;
			}
		}
		c++;
		s++;
	}
	return (a);
}
