#include "main.h"

/**
 * _abs: - prints the sign of a number
 *
 * Description: it calculates the absolute value
 * of a number.
 * Return: It returns the absolute value of a number.
 **/

int _abs(int n)
{
	int i;

	int j = n;

	if (j > 0)
		return (j);
	else if (j == 0)
		return (0);
	else
	{	
		i = (-j);
		return (i);
	}
}
