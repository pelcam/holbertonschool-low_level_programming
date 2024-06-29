#include "main.h"

/**
 * _strncpy - copie a string
 * @dest: where to copie the string
 * @src: string to be copied
 * @n: variable integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i1 = 0, i2 = 0;

	while (i1 < n && src[i1] != '\0')
	{
		i1++;
	}
	while (i2 < i1 && src[i2] != '\0')
	{
		dest[i2] = src[i2];
		i2++;
	}
	while (i2 < n)
	{
		dest[i2] = '\0';
		i2++;
	}
	return (dest);
}
