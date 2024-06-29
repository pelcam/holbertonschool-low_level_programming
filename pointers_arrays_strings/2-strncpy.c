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

	while (a < n && src[a] != '\0')
		a++;
	for (; b < a && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
