#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: first argument
 * @size: second argument
 *
 * Return: NULL if nmemb if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;
	unsigned int len;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = nmemb * size;
	mem = malloc(nmemb * size);

	if (mem == 0)
		return (NULL);

	for (i = 0; i < len; i++)
		mem[i] = 0;

	return (mem);
}
