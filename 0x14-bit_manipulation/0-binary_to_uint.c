#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number
 * to unsigned int.
 * @b: string of 0 and 1
 *
 * Return: the converted number or
 * 0 if there are one or more characters other
 * than 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{

	int i;
	int len = 0;
	int j = 0;
	unsigned int u = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}
	for (len = (len - 1); len >= 0; len--)
	{
		if (b[len] != '0' && b[len]!= '1')
			return (0);
	}

	while (*(b + j) == '0' || *(b + j) == '1')
	{
		u <<= 1;
		u += b[j] - '0';
		j++;
	}
	return (u);
}
