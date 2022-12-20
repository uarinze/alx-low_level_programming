#include "main.h"

/**
 * rev_string - reverses a string
 * @s: - string argument
 *
 * description: this function takes a string and
 * reverses it.
 */
void print_rev(char *s)
{

	int i = 0;
	int j;
	int len;
	char x[len];

	while (*(s + i) != '\0')
	{
		i++;
	}

	len = i;

	for (j = (len - 1); j >= 0; j--)
	{
		x[j] = *(s + j);
	}

	*s = x;
}
