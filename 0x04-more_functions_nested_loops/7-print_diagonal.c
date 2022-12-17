#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: first argument
 *
 * Description: prints a diagonal line and returns nothing
 */
void print_diagonal(int n)
{
	int i;
	
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);

			if (i == n - 1)
				continue;

			_putchar(10);
		}
	}
	_putchar(10);
}
