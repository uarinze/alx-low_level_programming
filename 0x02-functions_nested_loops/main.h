#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void print_putchar(void)
{
	int _putchar[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(_putchar[i]);
	}
	putchar(10);
}

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
