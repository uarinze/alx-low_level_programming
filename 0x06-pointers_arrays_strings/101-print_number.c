#include "main.h"

/**
 *print_number - prints number
 *@n: number to print
 *
 *description: prints a number
 */
void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
}
