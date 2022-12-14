#include "main.h"

void print_alphabet(void)
{
	int p_a[26];

	int a, b, i;

	b = 0;

	for (a = 97; a <= 122; a++)
	{
		p_a[b] = a;
		b++;
	}

	for (i = 0; i < 26; i++)
	{
		_putchar(p_a[i]);
	}

	_putchar(10);
}
