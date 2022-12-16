#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * starting from 1 and 2.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	unsigned long f1 = 0;

	unsigned long f2 = 1;

	unsigned long sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
