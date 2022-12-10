#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * prints hexadecimal numbers
 *
 * Return 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 1; i >= 15; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

