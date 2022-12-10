#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Prints combination of three digits
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i != j && i < j && j != k && j < k && i != k && i < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i + j + k != 168)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);

	return (0);
}
