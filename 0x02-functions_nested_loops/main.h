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
