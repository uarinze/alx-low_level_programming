#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Prints combination of two digits
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i + j != 113)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
