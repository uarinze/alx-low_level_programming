#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _len - counts the length of str
 * @x: str to count
 *
 * Return: returns the lenght of a str
 */

int _len(char *x)
{
	int i = 0;
	int j = 0;

	while (*(x + i) != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

/**
 * string_nconcat - concatenates strings
 * @s1: - first argument string.
 * @s2: - secons argument string.
 * @n: - n bytes to concatenate from s2.
 *
 * Description: - concatenates two strings
 * Return: returns a pointer to the
 * allocated memory which contains s1
 * follwed by first n bytes of s2 and
 * null terminated. if function fails,
 * return NULL. if NULL is passed then
 * treat as "".
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int cat_len = 0;
	char *cat;
	unsigned int i, j;	

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = _len(s1);
	len_s2 = _len(s2);
	if (n >= len_s2)
		n = len_s2;
	cat_len = len_s1 + n + 1;
	cat = malloc(sizeof(char) * cat_len);
	if (cat == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		cat[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		cat[len_s1 + j] = s2[j];
	}
	cat[i + j] = '\0';
	return (cat);
}
