#include "main.h"

/**
 * _isupper - determines if the character entered
 * is uppercase.
 * @c: collects a value
 *
 * Description: checks if the caracter is upper case
 * Return: 1 if upper, 0 if lower
 */
int _isupper(int c)
{
	int i = c;

	if (i >= 65 && i <= 90)
		return (1);
	else
		return (0);
}
