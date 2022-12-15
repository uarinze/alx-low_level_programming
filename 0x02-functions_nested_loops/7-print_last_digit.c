#include "main.h"

/**
 * print_last_digit - prints the last digit of any number
 * @n: - takes the value to be evaluated
 *
 * Description: it takes an integer value and
 * prints the last digit.
 * Return: It returns the absolute value of a number.
 **/
int print_last_digit(int n)
{

	int j = n;

	int i;

	if (j > 0)
		j = j;
	else if (j == 0)
		j = 0;
	else
		j = (-j);
	i = (j % 10);
	return (i);
}
