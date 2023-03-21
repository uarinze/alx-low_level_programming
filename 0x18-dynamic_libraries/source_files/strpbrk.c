#include "main.h"

/**
 * _strpbrk - searches a string
 * for any of a set of bytes.
 * @s: - is a pointer to string.
 * @accept: - is prefix substring.
 *
 * Description: this function locates the first occurence
 * in the string s of any of the bytes in the
 * string accept
 *
 * Return: It returns a pointer to the byte in s that
 * matches one of the bytes in accept, or NULL
 * if no such bytes is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept + i))
				return (s);
		}
		s++;
	}

	return ('\0');
}
