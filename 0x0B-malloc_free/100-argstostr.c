#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: first argument
 * @av: second argument
 *
 * Description: function concatenates all
 * the arguments of the program
 * Return: NULL if ac == 0 || av == NULL
 * Returns a pointer to a new string, or NULL
 * if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int ar;
	int b;
	int n = ac;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ar = 0; ar < ac; ar++)
	{
		for (b = 0; av[ar][b]; b++)
			n++;
	}
	str = malloc(sizeof(char) * n + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (ar = 0; ar < ac; ar++)
	{
		for (b = 0; av[ar][b]; b++)
		{
			str[i++] = av[ar][b];
		}
		str[i++] = '\n';
	}
	str[n] = '\0';

	return (str);
}
