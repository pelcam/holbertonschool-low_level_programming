#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: where to concatenate the two strings
 * @src: source of the string to append
 * @n: number of bytes to use from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int iD = 0;
	int iS = 0;

	while (dest[iD] != '\0')
	{
		iD++;
	}

	while (iS < n && src[iS] != '\0')
	{
		dest[iD] = src[iS];
		iD++;
		iS++;
	}
	dest[iD] = '\0';
	return (dest);
}
