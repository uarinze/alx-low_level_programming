#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1 - first argument
 * @s2 - second argumet
 * 
 * Description: this function compares two strings
 * it returns an integer less tahn, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match, or
 * be greater tah s2.
 * 
 * Return: It returns an int. .
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
