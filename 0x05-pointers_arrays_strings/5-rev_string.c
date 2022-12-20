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
	int k = 0;
	char x = s[0];

	while (*(s + i) != '\0')
	{
		i++;
	}

	len = i;

	for (j = (len - 1); j >= 0; j--)
	{
		*(s + k) = s[j];
		k++;
	}
}