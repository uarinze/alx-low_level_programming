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

	int len = i;
	int j;

	for (j = len; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');

}
