#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string given as parameter
 *
 * Return: a pointer to a newly allocated space in memory, NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *cstr;
	unsigned int i, l = 0;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	cstr = (char *)malloc((l) * sizeof(char));
	if (cstr == NULL)
		return (NULL);
	return (cstr);
}
