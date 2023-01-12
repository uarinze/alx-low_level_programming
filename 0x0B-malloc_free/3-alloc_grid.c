#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a 2D array of int
 * @width: first argument width
 * @height: second argument height
 *
 * Description: returns a 2D aay of int
 * Return: NULL on failure or if width or
 * height is negative.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * (sizeof(int *)));
	if (matrix == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int *));
		if (matrix[i] == NULL)
		{
			for (; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
/*			*(matrix + ((i * width + j) * sizeof(int))) = 0;*/
		}
	}
	return (matrix);
}
