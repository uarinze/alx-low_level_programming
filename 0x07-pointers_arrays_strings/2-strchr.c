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

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
			;
	} return ('\0');
}
