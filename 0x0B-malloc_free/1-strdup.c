#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: - pointer to string passed as patameter
 *
 * Description: - the function that returns a pointer
 * to a newly created space in memory whic contains a copy
 * of the string given as parameter.
 *
 * Return: pointer to the string given as parameter.
 * NULL if str is NULL. NULL if insuficient memory was available.
 */
char *_strdup(char *str)
{
	int c, i, len, j;
	char *nstr;

	if (str == NULL)
		return (NULL);
	c = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		c++;
		i++;
	}
	len = c;

	nstr = (char *)malloc((sizeof(char) * len));

	if (nstr == 0)
		return (NULL);

	for (j = 0; j < len; j++)
	{
		*(nstr + j) = *(str + j);
	}
	return (nstr);

	free(nstr);
}
