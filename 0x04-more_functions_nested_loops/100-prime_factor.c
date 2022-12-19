#include <stdio.h>

/**
 * main - this program finds and
 * prints the largest prime factor
 * of the number 612852475143
 *
 * Return - 0 (Success)
 */
int main(void)
{
	long num = 612852475143;

	long x;

	while (x < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}
		for (x = 3; x < (num / 2); x += 2)
		{
			if ((num % x) == 0)
				num /= x;
		}
	}
	printf("%ld\n". num);

	return (0);
}
