#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 * @grid: grid to be freed
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
