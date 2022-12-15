#include "main.h"

/**
 * _abs: - returns the absolute value of a number
 * @n: - takes the value to be checked
 *
 * Description: it calculates the absolute value
 * of a number. This is done my putting the number in
 * the variable and checking for its sign then returning
 * its value.
 * Return: It returns the absolute value of a number.
 **/

int _abs(int n)
{

	int j = n;

	if (j > 0)
		j = j;
	else if (j == 0)
		j = 0;
	else
		j = (-j);
	return (j);
}
