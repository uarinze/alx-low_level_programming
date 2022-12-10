#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Prints combination of two two-digits
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int i, j, k, l;/*declares variables that will contain each digit*/
/*creating nested loops*/
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i != k && j != l)
					{
						putchar(i);/*adds first digit of first pair*/
						putchar(j);/*adds second digit of first pair*/
						putchar(32);/*adds space*/
						putchar(k);/*adds first digit of second pair*/
						putchar(l);/*adds second digit of second pair*/
					}
					if (i + j + k + l < 227)
					{
						putchar(44);/* adds comma*/
						putchar(32);/*adds space*/
					}
				}
			}
		}
	}
	putchar(10);

	return (0);
}
