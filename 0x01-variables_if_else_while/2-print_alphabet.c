#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * prints alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
