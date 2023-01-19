#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * given as a parameter on each element
 * of an array
 * @array: the array to perform the
 * function on
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i;
	int j = (int)size;

	for (i = 0; i < j; i++)
	{
		action(*(array + i));
	}
}
