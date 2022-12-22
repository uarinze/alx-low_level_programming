#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: - first argument which isa string
 * @src: - second argumet which is the string to append to dest.
 * @n: - third argument which is the max bytes to cat from src
 *
 * Description: this function appends the src string
 * to the dest string, overwriting the terminating null
 * byte (\0) at the end of dest, and then adds a terminating null byte
 * Return: It returns the copied string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (*(src + i) != '\0')
		i++;

	while (*(dest + j) != '\0')
		j++;
	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[j] = src[k];
		j++;
	}
	dest[(j + i)] = '\0';
	return (dest);
}
