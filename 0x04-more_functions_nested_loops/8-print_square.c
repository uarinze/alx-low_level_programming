#include "main.h"

/**
 * print_square - prints the square shape
 * @size: first argument
 *
 * Description: it prints a square and returns no value
 */
void print_square(int size)
{
	int dim1; 
	
	int dim2;

	if (size > 0)
	{
		for (dim1 =0; dim1 < size; dim1++)
		{
			for (dim2 = 0; dim2 < size; dim2++)
				_putchr(35);
			if (dim1 == size -1)
				continue;
			_putchar(10);
		}
	}
	_putchar(10);
}

