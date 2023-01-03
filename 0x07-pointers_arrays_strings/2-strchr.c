#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: - first argument which is a pointer to the destination memory.
 * @c: - second argumet which is a pointer to source memory.
 *
 * Description: this function copies n bytes from memory area src
 * to memory area dest.
 * Return: It returns a pointer to dest.
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;
	int len = 0;

	for (j = 0; *(s + j) != '\0'; j++)
		len++;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else if ((i = len) &&  (*(s + i) != c))
			return ('\0');
		else
			;
	}
}
