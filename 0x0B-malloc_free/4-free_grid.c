#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 *
 * @grid: 2d grid
 * @height: height of grid
 *
 * Return: NULL on faliure
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);

}
