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
	void *x;
	char *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);
	if (x == NULL)
		return (NULL);
	buffer = x;
	for (i = 0; i < (size * nmemb); i++)
	{
		buffer[(size * nmemb)] = '\0';
	}
	
	return (x);
}
