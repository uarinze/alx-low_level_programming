#include "main.h"

/**
 * _strlen: - returns the length of a string
 *@s: - string argument
 *
 * Description: this function takes a pointer to a char
 * as parameter and returns the length of the string.
 * Return: returns an int
 */
int _strlen(char *s)
{

	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
