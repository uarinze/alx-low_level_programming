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

	int i, a;

	if (j > 0)
	{
		j = j;
		i = (j % 10);
	}
	else if (j == 0)
	{
		j = 0;
		i = (j % 10);
	}
	else
	{
		j = (-j);
		i = (j % 10);
	}

	a = ((i*10) + i);
	return (a);
}
