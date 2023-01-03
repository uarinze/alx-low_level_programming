#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: - is a pointer to string..
 * @c: - is the character to search for.
 *
 * Description: this function returns a pointer
 * to the first occurence of c in string s.
 * Return: It returns a pointer to c in s.
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
