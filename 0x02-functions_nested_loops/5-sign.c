#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n:- collects the number to test
 *
 * Description: it checks a value stored in n and
 * return the sign.
 * Return: It returns 1 when true and 0 if otherwise.
 **/

int print_sign(int n)
{
	if (n > 0)
	{	_putchar(43);
		return (1);
	}
	else if (n == 0)
	{	_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
