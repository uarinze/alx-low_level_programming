#include "main.h"

/**
 * prints numbers from 0 - 9 omitting 2 and 4
 *
 * Description: this function prints numbers
 * from 0 - 9. it doesn't return a value
 */
void print_numbers(void)
{
	int i = 48;

	while (i  < 58)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar(10);
}
