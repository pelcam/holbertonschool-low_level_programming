#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of characters to allocate memory for
 *
 * Return: a pointer to the allocated memory, and NULL if failed allocation
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (int *)malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
