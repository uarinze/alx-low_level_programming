#include <stdlib.h>
#include "main.h"

int len(char *s);

/**
 * len - calculates length of string
 * @s: - string argument
 *
 * Return: - length of string
 */
int len(char *s)
{
	int i = 0;
	int c = 1;

	if (s == NULL)
		c = 1;
	else
	{
		while (*(s + i))
		{
			c++;
			i++;
		}
	}
	return (c);
}

/**
 * str_concat - concatenates two strings
 * @s1: - first string
 * @s2: - second string
 *
 * Description: - the function concatenates two
 * strings s1 and s2;
 *
 * Return: pointer to the concatenated string s1 followed
 * by s2 and then null terminated. " " if str is NULL.
 * NULL if program fails.
 */
char *str_concat(char *s1, char *s2)
{
	int lens1, lens2;
	int i;
	int j;
	int comb_len;
	char *comb_str;

	if (s1 == NULL)
	{
		s1 = "";
		lens1 = 1;
	}
	else
		lens1 = len(s1);

	if (s2 == NULL)
	{
		s2 = "";
		lens2 = 1;
	}
	else
		lens2 = len(s2);
	comb_len = lens1 + lens2;
	comb_str = (char *)malloc((sizeof(char) * comb_len));
	if (comb_str == 0)
		return (NULL);
	else
	{
		
		for(i = 0; s1[i] != '\0'; i++)
		{
			*(comb_str + i) = *(s1 + i);
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			*(comb_str + lens1) = *(s2 + j);
			lens1++;
		}
	}
	return (comb_str);

	free(comb_str);
}
