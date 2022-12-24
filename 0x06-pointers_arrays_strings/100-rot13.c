#include "main.h"
/**
 *rot13 - encoes a string in rot13
 *@str: string to encode
 *
 *description: encodes a string to rot13
 *Return: returns an encoded string
 */
char *rot13(char *str)
{
	int i;
	int j;

	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
	}
	return (str);
}
