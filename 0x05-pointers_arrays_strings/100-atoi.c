#include "main.h"

/**
 *  _atoi - converts a string to an integer
 *  @s: first argument
 *
 *  Description: it converst a string to integer
 *  and returs the integer.
 *  Return: the integer that was converted from the string.
 */
int _atoi(char *s)
{
	int i = 1;
	int j = 0;

	while (*s++)
	{
		if (*s == 45)
			i = i * -1;
		else if (*s >= 48 && *s <= 57)
			j = (j * 10) + (*s - 48);
		else if (j > 0)
			break;
	}
	return (j * i);


}
