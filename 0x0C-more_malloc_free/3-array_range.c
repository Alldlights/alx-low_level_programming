#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min value of integer of the array
 * @max: maximum value of the integer of array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, j;

	if (min > max)
		return (NULL);
	j = (max - min) + 1;

	a = malloc(sizeof(*a) * j);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < j && min <= max; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
