#include "main.h"

/**
 * reverse_array - reverses a string
 * @a: first argument
 * @n: second argument
 *
 * description: reverses an array
 */
void reverse_array(int *a, iny n)
{
	int b;
	int i;

	for ( i = (n - 1); i >= (n / 2); i --)
	{
		b = a[(n - 1 - i)];
		a[(n - 1 - i)] = a[i];
		a[i] = b;
	}
}
