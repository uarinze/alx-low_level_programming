#include "main.h"

/**
 * puts2 - prints every other characer of a string
 * starting with the first character, follwed by new line
 * @str: - string argument
 *
 * description: this function prints a string
 * to standard output.
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
