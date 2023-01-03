#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the chessboard
 * @a: - is a pointer to string.
 * @size: - second argument.
 *
 * Description: this function prints the
 * sum of the two diagonals of a square
 * matrix of integers.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + i);
		a = a + size;
	}
	a = a - size;

	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + *(a + i);
		a = a - size;
	}
	printf("%d, %d\n", sum1, sum2);
}
