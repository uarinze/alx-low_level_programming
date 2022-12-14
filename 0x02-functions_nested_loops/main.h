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
	int p_a[] = {97 .. 122, 65 .. 90};

	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(p_a[i]);
	}
	putchar(10);
}
