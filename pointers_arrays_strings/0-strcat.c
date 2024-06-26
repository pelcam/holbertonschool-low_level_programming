#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: where to concatenate the two strings
 * @src: source of the string to append
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int iD = 0;
	int iS = 0;

	while (dest[iD] != '\0')
	{
		iD++;
	}

	while (src[iS] != '\0')
	{
		dest[iD] = src[iS];
		iD++;
		iS++;
	}
	dest[iD] = '\0';
	return (dest);
}
