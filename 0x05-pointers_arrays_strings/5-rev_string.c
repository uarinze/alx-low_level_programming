#include "main.h"

/**
 * rev_string - reverses a string
 * @s: - string argument
 *
 * description: this function takes a string and
 * reverses it.
 */
void rev_string(char *s)
{

	int i = 0;
	int j;
	int len;
	char x;

	while (*(s + i) != '\0')
	{
		i++;
	}

	len = i;

	for (j = (len - 1); j >= (len / 2); j--)
	{
		x = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = x;
	}
}
