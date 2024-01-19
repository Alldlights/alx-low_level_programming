#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int total_num, i;

	if (min > max)
		return (NULL);
	total_num = max - min + 1;
	ptr = malloc(sizeof(int) * total_num);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total_num; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
