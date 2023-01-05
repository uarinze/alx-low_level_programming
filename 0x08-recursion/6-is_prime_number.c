#include "main.h"

int is_div(int m, int d);

/**
 * is_div - checks if a number is divisible
 * @m: - the number to be checked
 * @d: - the divisor
 *
 * Description: checks if a number is divisible
 * a number.
 *
 * Return: it returns 0 if th enumber is divisible.
 * But returns -1 if otherwise.
 */
int is_div(int m, int d)
{
	if (m % d == 0)
		return (0);

	if (d == m / 2)
		return (1);

	return (is_div(m, d + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: - number to be checked
 *
 * Desctription: checkes if a number is prime
 *
 * Return: returns 1 if the numbe ris prime
 * and 0 potherwise.
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_div(n, d));
}
