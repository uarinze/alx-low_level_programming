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
	int h_i, w_i;
	if(width <= 0 || height <=0)
		return (NULL);
	for (h_i = 0; h_i < height; h_i++)
	{
		matrix[h_i] = (int *)malloc(sizeof(int) * width);
		if (matrix[h_i] == NULL)
		{
			for (; h_i >= 0; h_i--)
				free(matrix[h_i]);
			free(matrix);
			return (NULL);
		}
	}
	for (h_i = 0; h_i < height; h_i++)
	{
		for (w_i = 0; w_i < width; w_i++)
			matrix[h_i][w_i] = 0;
	}
	return (matrix);
}
