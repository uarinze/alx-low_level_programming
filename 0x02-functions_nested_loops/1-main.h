#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>

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
	for (c = 65; c <= 90; c++)
	{
		p_a[d] = c;
		d++;
	}

	for (i = 0; i < 52; i++)
	{
		putchar(p_a[i]);
	}
	putchar(10);
}

#endif
