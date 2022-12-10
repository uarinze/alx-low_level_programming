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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char m = char(n);
	char l = m-1;
	printf("Last digit of %d is %d ", n,int(l);
	if (n > 5)
		printf("and is greater than 5\n");
	else if (n == 0)
		printf("and is 0\n");
	else if (n < 6 && n != 0) 
		printf("and is less than 6 and not 0\n");
	else
		printf("\n");

	return (0);
}
