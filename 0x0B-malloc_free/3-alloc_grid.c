#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a 2D array of int
 * @width: first argument width
 * @height: second argument height
 *
 * Returns: NULL on failure or if width or
 * height is negative.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	matrix = (int **)malloc(height * width *(sizeof(int **)));
	if (matrix == 0)
		return (NULL);
	else{
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
/*			*(matrix + ((i * width + j) * sizeof(int))) = 0;*/
		}
	}
	return (matrix);
	}
	free(matrix);
}
