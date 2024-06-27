#include "main.h"

/**
 * _strcpy - copies a pointed string to the buffer of another pointer
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int *ptr_dest = dest;

	while (*src != '\0')
	{
		*ptr_dest = *src;
		ptr_dest++;
		src++;
	}
	*ptr_dest = '\0';

	return (dest);
}
