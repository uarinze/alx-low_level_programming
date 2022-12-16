#include <stdio.h>
/**
 * main - find and prints the first 98
 * fibonacci numbers starting with 1 and 2
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long sum, h1, h2, f1_h1, f1_h2, f2_h1, f2_h2;

	for (i = 0; i < 92; i++)
	{
		sum = f1 + f2;
		printf("%lu,  ", sum);
		f1 = f2;
		f2 = sum;
	}
	f1_h1 = f1 / 10000000000;
	f2_h1 = f2 / 10000000000;
	f1_h2 = f1 % 10000000000;
	f2_h2 = f2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		h1 = f1_h1 + f2_h1;
		h2 = f1_h2 + f2_h2;

		if (f1_h2 + f2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (i != 98)
			printf(", ");
		f1_h1 = f2_h1;
		f1_h2 = f2_h2;
		f2_h1 = h1;
		f2_h2 = h2;
	}
	printf("\n");
	return (0);
}
