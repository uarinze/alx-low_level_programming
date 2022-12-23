#include "main.h"

/**
 * string_toupper - changes all lowercase to string to upper
 * @* - takea this argument
 *
 * description: converts all lowercase to upper case
 * Return: returns char
 */
char *string_toupper(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
