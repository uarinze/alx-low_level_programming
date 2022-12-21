#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: - first argument which isa string
 * @src: - second argumet which is the string to append to dest.
 *
 * Description: this function appends the src string
 * to the dest string, overwriting the terminating null
 * byte (\0) at the end of dest, and then adds a terminating null byte
 * Return: It returns the copied string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;
	int m = 0;
	int n = j;

	while (*(src + i) != '\0')
		i++;

	while (*(dest + j) != '\0')
		j++;

	for (k = j; k <= (i); k++)
	{
		dest[n] = src[m];
		n++;
		m++;
	}
	dest[(j + i)] = '\0';

	return (dest);
}
