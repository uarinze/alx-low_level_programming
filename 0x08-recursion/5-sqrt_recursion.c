#include "main.h"

int n_sqrt(int m, int r);

/**
 * n_sqrt: finds the natural square root of a number
 * @m: - the number to fiind the root
 * @r: - the root to be tested
 *
 * Description: finds the natural square root of
 * a number.
 *
 * Return: it returns the natural square root.
 * But returns -1 if it doesnt have.
 */
int n_sqrt(int m, int r)
{
	if ((r * r) == m)
		return (r);

	if (r == m / 2)
		return (-1);

	return(n_sqrt(m, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square
 * root of a number n.
 * @n: - number
 * 
 * Desctription: returns the natural square
 * root of n
 *
 * Return: returns the natural square root of n
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n_sqrt(n, r));
}
