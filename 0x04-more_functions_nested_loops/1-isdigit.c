#include "main.h"

/**
 * _isdigit - determines if the character entered
 * is a digit.
 * @c: collects a value
 *
 * Description: checks if the caracter is digit 
 * Return: 1 if digit, 0 otherwiser
 */
int _isdigit(int c)
{
	int i = c;

	if (i >= 48 && i <= 57)
		return (1);
	else
		return (0);
}
