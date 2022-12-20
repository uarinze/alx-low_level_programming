#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: - string argument
 *
 * description: this function takes a string and
 * prints the second half of it.
 */
void puts_half(char *str)
{

	int i = 0;
	int n;
	int len;
	int j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	len = i;

	if (len % 2 == 0)
	{
		n = len / 2;
		for (j = n; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (len - 1) / 2;
		for (j = n; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
