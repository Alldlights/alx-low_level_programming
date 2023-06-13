#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - funtion that returns a pointer to a 2 dimn array of integer
 * @width: width of the arrray
 * @height: height of array
 *
 * Return: a pointer to the array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			while (--i >= 0)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
