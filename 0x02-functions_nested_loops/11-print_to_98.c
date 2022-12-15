#include "main.h"

/**
 * print_to_98 - prints all natural numbetrs
 * from n to 98 followed by a new line.
 * @n: first argument
 *
 * Description: prints all natural number from 
 * n to 98. n is the number passed to the function
 * as an argument.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
