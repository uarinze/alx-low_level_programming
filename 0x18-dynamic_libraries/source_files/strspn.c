#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: - is a pointer to string.
 * @accept: - is prefix substring.
 *
 * Description: this function gets the
 * length of a prefix substring.
 *
 * Return: It returns the number of bytes in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int len = 0;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept + i))
			{
				len++;
				break;
			}
			else if (*(accept + i + 1) == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
