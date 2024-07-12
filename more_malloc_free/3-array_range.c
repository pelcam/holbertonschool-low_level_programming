#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	array = malloc(s * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		array[i] = min + i;
	return (array);
}
