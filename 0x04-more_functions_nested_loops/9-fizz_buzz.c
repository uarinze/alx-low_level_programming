#include <stdio.h>

/**
 * main - prints the numbers 1 - 100
 * and fizz for numbers multiples of three, while buzz
 * for numbers multiple of five.
 *
 * Return:  0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else 
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
