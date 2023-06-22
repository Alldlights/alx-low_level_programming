#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: array of integers
 *
 * Return: the index of the first element for which cmp() doesn't return 0
 * if no element matches, return -1, if size <= 0, return 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}