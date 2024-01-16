#include "main.h"

/**
 * alloc_grid - Function returns a pointer to a 2D array of integers
 * @width: The rows of the array
 * @height: The column of the array
 * Return: A pointer to the 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * width);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(sizeof(int) * height);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
