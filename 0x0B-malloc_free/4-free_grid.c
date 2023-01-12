#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 * by alloc_grid function
 * @grid: first argument
 * @height: second argument
 *
 * Description: frees a 2D grid previously created
 * from memory by the alloc_grid function.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
