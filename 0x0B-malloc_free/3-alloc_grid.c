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
	
	matrix = malloc(width *(sizeof(int *)));
	if (matrix == 0)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		matrix[i] = (int *)malloc(height * sizeof(int *));
		if (matrix[i] == NULL)
		{
			for (; i >= 0; i--)
				free(matrix[i]);
			free (matrix);
			return (NULL);
		}
	}
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
