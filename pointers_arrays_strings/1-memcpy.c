#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area where we want to copie
 * @src: memory area to copie
 * @n: number of bytes to copie
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
