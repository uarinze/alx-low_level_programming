#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * using malloc and free
 * @ptr: pointer to memory to reallocate
 * @old_size: size of old mem
 * @new_size: size of new mem
 *
 * Description: - if new_size > old_size, the
 * added mem should not be initialised.
 * if new_size == old size, do nothing, rtn ptr
 * if ptr is NULL, call malloc(new_size)
 * if new_size is == 0 and ptr != NULL,
 * then free(ptr) and return NULL.
 * Return: pointer to the new allocated mem
 * if new_size == old_size, return ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned int j;
	void *ptrn;
	char *ptrr;
	char *ptnn;
	

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptrn = malloc(new_size);
		if (ptrn == 0)
			return (NULL);
		return (ptrn);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptnn = ptr;
	if (new_size < old_size)
	{
		ptrr = malloc(new_size);
		if (ptrr == 0)
			return (NULL);
		for (i = 0; i < new_size; i++)
		{
			ptrr[i] = ptnn[i];
		}
		free(ptr);
		return (ptrr);
	}
	ptrr = malloc(new_size);
	if (ptrr == 0)
		return (NULL);
	for (j = 0; j < old_size; j++)
	{
		ptrr[j] = ptnn[j];
	}
	free(ptr);
	return (ptrr);
}
