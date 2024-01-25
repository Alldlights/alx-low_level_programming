#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array of integrs
 * @size: The size of the array
 * @cmp: The pointer to the function to use for the search
 * Return: The index of the first element for which the function pointer
 * would search through
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

