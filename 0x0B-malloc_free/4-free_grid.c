#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees an array created in memory
 * @grid: the 2 dimesional array created
 * @height: height of the array.
 *
 * Return: a pointer to the free array.
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
