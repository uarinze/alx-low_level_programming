#include "main.h"

/**
 *
 *
 *
 *
 *
 */
void jack_baur(void)
{
	int i, j;

	for(i = 0; i <= 23; i++)
	{
		for(j = 0; j <= 59; j++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(58);
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar(10);
		}
	}
}
