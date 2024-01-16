#include "main.h"

/**
 * free_grid - Function that frees a 2D grid
 * @grid: The 2Darray of integer
 * @height: row of the array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
