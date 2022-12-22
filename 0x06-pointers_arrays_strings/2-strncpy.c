#include "main.h"

/**
 * _strncpy - copies src to dest.
 * @dest: - first argument which isa string
 * @src: - second argumet which is the string to append to dest.
 * @n: - third argument which is the max bytes to cpy from src
 *
 * Description: this function appends the src string
 * to the dest string, overwriting the terminating null
 * byte (\0) at the end of dest, and then adds a terminating null byte
 * Return: It returns the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (*(src + i) != '\0')
		i++;

	for (j = 0; j < n && src[i] != '\0'; j++)
	{
		dest[j] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
