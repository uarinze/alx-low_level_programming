#include "main.h"

/**
 * print_square - prints the square shape
 * @size: first argument
 *
 * Description: it prints a square and returns no value
 */
void print_square(int size)
{
	int i;
	
	int j;

	
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else (_putchar(10));
}
