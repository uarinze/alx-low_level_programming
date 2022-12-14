#include "main.h"

/* prints alphabets in lowercase ten times */

void print_alphabet_x10(void)
{
	int p_a[26];

	int a, b, i, j;

	b = 0;

	for (a = 97; a <= 122; a++)
	{
		p_a[b] = a;
		b++;
	}
	for (i = 1; i <= 10; i++)
	{
		for(j = 0; j < 26; j++)
		{
			_putchar(p_a[j]);
		}
	_putchar(10);
	}
}
