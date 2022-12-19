#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the first argument
 *
 * Description: this function prints an integer
 * it takes an int as argument and it returns no value
 */
void print_number(int n)
{
	int i;

	i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}

	if ((i / 10) > 0)
		_putchar((i / 10) + 48);
	_putchar((i % 10) + 48);
}
