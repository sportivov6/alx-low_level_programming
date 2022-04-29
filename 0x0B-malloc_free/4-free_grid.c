#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid's allocated memory.
 * @grid: grid.
 * @height: grid's height.
 **/

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
