#include "main.h"

/**
 * _memcpy - copies memorry area.
 * @dest: - first argument which is a pointer to the destination memory.
 * @src: - second argumet which is a pointer to source memory.
 * @n: - the number of characters to fill
 *
 * Description: this function copies n bytes from memory area src
 * to memory area dest.
 * Return: It returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; i <= n; i++)
	{
		dest[j] = src[i];
		j++;
	}

	return (dest);
}
