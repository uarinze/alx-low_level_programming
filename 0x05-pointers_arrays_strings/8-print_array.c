#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n number of elements from an array
 * starting with the first character, follwed by new line
 * @a: - first argument which is an array
 * @n: - second argumet which is the number of elements
 *
 * description: this function prints n elements of an
 * array of integers.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[(n - 1)]);
	}
	else
		printf("\n");
}
