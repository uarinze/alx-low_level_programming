#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * 
 * Return: pointer to the new array.
 * NULL if min > max || if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int len;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;

	arr = malloc(len * sizeof(int));
	for (i = 0; i < len; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
