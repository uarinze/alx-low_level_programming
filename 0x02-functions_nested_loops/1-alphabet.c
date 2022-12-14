#include "main.h"

/**
 * main - entry point
 *
 * prints alphabet in lowercase and then in uppercase, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	
	void print_alphabet(void)
	{
		int p_a[52];

		int a, b, c, d, i;

		b = 0;
		d = 26;

		for (a = 97; a <= 122; a++)
		{
			p_a[b] = a;
			b++;
		}
		print_alphabet();

		return (0);
	}
}
