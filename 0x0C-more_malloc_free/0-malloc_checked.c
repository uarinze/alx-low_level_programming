#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memorry using malloc
 * @b: - amount of space to allocate.
 *
 * Description: - allocates memory using malloc
 * Return: returns a pointer to the allocated memory
 * if malloc fails, malloc_checked should return 98
 * and cause normal process termination.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}

	return (ptr);
}
