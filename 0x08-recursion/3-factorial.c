#include "main.h"

/**
 * factorial - returns the factorial of
 * a given number
 * @n: - factorial number
 *
 * Desctription: calculates the factorial of n
 *
 * Return: returns n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
