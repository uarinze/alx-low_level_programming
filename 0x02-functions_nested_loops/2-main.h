#ifndef main.h
#define main.h

#include <stdio.h>

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
	for (j = 1; j <=10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			putchar(p_a[i]);
		}
		putchar(10);
	}
}

#endif
