#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued terms
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long f1 = 0;

	unsigned long f2 = 1;

	unsigned long fsum;

	float s_sum;

	while (1)
	{
		fsum = f1 + f2;
		if (fsum > 4000000)
			break;
		if ((fsum % 2) == 0)
			s_sum += fsum;
		f1 = f2;
		f2 = fsum;
	}
	printf("%.0f\n", s_sum);

	return (0);
}
