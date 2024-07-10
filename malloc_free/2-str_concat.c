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
		while (s2[l2] != '\0')
			l2++;

	cstr = (char *)malloc((l1 + l2) * sizeof(char));
	if (cstr == NULL)
		return (NULL);

	for (i1 = 0; i1 < l1; i1++)
		cstr[i1] = s1[i1];
	for (i2 = 0; i2 < l2; i2++)
		cstr[i2 + i1] = s2[i2];

	return (cstr);
}
