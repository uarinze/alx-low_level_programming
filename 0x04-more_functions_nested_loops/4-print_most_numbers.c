#include "main.h"

/**
 * prints numbers from 0 - 9 omitting 2 and 4
 *
 * Description: this function prints numbers
 * from 0 - 9. it doesn't return a value
 */
void print_most_numbers(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 53)
			continue;
		else
			break;
		}
		_putchar(i);
	}
	_putchar(10);
}
