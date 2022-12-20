#include "main.h"

/**
 * _puts - prints a string, folllwed by new line
 * @str: - string argument
 *
 * description: this function prints a string
 * to standard output.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		printf("%s", *(str + i));
		i++;
	}
	printf("\n");
}
