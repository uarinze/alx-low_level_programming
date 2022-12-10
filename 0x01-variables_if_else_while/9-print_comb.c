#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * prints single numbers, comma, and space using ascii characters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);/* prints the number */
		if (i != 57) {
			putchar(44);/* adds a comma*/
			putchar(32);/* adds a space*/
		}
	}

	putchar('\n');

	return (0);
}

