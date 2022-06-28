#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory for grid
 * @grid: to be freed
 * @height: heiht of grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
