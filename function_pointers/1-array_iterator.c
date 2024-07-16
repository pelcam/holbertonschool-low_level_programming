#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter,
 * on each element of an array
 * @array: pointer to the array to be treated
 * @size: size of the array
 * @action: action to execute on the elements of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
