#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @sptr: string pointer
 * Return: sptr
 */

char *string_toupper(char *sptr)
{
	int i;

	for (i = 0; sptr[i] != '\0'; i++)
	{
		if (sptr[i] >= 'a' && sptr[i] <= 'z')
		{
			strs[i] = sptr[i] - 32;
		}
	}
	return (sptr);
}
