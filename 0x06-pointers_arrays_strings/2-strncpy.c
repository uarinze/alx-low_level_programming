#include "main.h"

/**
 * _strncpy - copies src to dest.
 * @dest: - first argument which isa string
 * @src: - second argumet which is the string to append to dest.
 * @n: - third argument which is the max bytes to cpy from src
 *
 * Description: this function copies the src string
 * to the dest string, overwriting the terminating null
 * byte (\0) at the end of dest, and then adds a terminating null byte
 * Return: It returns the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	int k;

	while (*(src + i) != '\0')
		i++;

	for (j = 0; j < n && j < i; j++)
	{
		dest[j] = src[j];
	}
	if (i < n)
	{
		for (k = i; k < n; k++)
		{
			dest[j] = '\0';
		}
	}
	else 
		for (k = i; k < (n + 1); k++)
		{
			dest[j] = '\0';
		}

	return (dest);
}
