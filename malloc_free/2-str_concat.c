#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string number one
 * @s2: string number two
 *
 * Return: NULL on failure, or the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *cstr;
	unsigned int i1, i2, l1 = 0, l2 = 0;

	if (s1 != NULL)
		while (s1[l1] != '\0')
			l1++;
	if (s2 != NULL)
		while (s2[l] != '\0')
			l2++;

	cstr = (char *)malloc((l1 + l2) * sizeof(char));
	if (cstr == NULL)
		return (NULL);

	for ()
}
