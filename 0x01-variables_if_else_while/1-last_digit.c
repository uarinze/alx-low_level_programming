#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * prints some number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is %d ", n, m);
	if (m > 5)
		printf("and is greater than 5\n");
	else if (m == 0)
		printf("and is 0\n");
	else if (m < 6 && m != 0)
		printf("and is less than 6 and not 0\n");
	else
		printf("\n");

	return (0);
}
