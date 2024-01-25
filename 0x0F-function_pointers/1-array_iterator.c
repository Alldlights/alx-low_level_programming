#include "function_pointers.h"

/**
 * array_iterator - Funtion that executes a function as a given
 * parameter on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: The pointer to the function to use
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
