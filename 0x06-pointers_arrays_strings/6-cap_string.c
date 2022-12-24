#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * @str: - first integer
 *
 * description: it capitalises all words os a string
 * Return: it returns char
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] ==  '{' ||
				str[i - 1] == '}' ||
				i == 0)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
