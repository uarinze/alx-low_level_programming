#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size:this is the only argument
 *
 * Description: the function prints a 
 * triangle using special chracters.
 */
void print_triangle(int size)
{
	int i;
	int j;

	is (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			       _putchar(32);
			for (j = 0; j < i; j++)
				_putchar(35);
			if (i == size)
				continue;

			_putchar(10);
		}
	}
	_putchar(10);
}
