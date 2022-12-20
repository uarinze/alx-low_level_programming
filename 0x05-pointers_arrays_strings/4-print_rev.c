#include "main.h"

/**
 * print_rev - prints the reversal of a string
 * @s: - string argument
 *
 * description: this function takes a string and
 * prints the reversal.
 */
void print_rev(char *s)
{

	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	length = i;

	char a[length] = *s;
	int j;

	for (j = length; j >= 0; j--)
	{
		_putchar(a[j]);
	}
	_putchar('\n');

}
