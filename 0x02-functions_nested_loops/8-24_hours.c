#include "main.h"

/**
 *
 * jack_bauer - prints the 24 hours and minutes
 * 
 * Description: it takes no argument
 * prints the 24 hour time frame and minutes
 * It does this for 24 hours
 */
void jack_bauer(void)
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
