#include "function_pointer.h"

/**
 * array_iterator - a fucntion that executes a function given as a paramater
 * on each element of an array.
 * @array: array of integers
 * @size: size of array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
