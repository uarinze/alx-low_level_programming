#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the null byte, to the buffer pointed
 * to by dest.
 * @dest: - first argument which is where we copy the string to
 * @src: - second argumet which is the source string to be copied.
 *
 * Description: this function copies string from one
 * locatino to another.
 * Return: It returns the copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(src + i) != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
