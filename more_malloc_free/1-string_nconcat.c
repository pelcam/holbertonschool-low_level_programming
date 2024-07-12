#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: 
 *
 * Return: a pointer to a newly allocated space in memory, with s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l1 = 0, l2 = 0, i, j;

	if (s1 != NULL)
		while (s1[l1] != '\0')
			l1++;
	if (s2 != NULL)
		while (s2[l2] != '\0')
			l2++;
	if (n >= l2)
		n = l2;
	concat = malloc((l1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';
	return (concat);
}
