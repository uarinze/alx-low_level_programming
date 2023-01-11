#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array and
 * initialises it with a specific character
 * @size: - size of array
 * @c: - character to initialise it with
 *
 * Description: - the function creates an
 * and initialises it with a specific character.
 *
 * Return: the function returns a pointer to the array
 * or NULL if it fails or if size == 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	char ch = c;
	unsigned int x = size;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc((sizeof(char) * size) + 1);

	for (i = 0; i < x; i++)
	{
		arr[i] = ch;
	}
	return (arr);

	free(arr);
}
