#include "main.h"

/**
 * leet - encode a string into 1337.
 * @*str - string argument
 *
 * Description: it encodes a string.
 * Return: It returns the encoded string.
 */
char *leet(char *str)
{
	int i;
	int j;
	char al[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <10; j++)
		{
			if (str[i] == al[j])
				str[i] = num[j];
		}
	}
	return (str);
}
