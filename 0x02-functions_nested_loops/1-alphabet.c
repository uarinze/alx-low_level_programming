#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Description: This function prints the alphabets in
 * lowercase characters from a - z once.
 * it uses _putchar function once.
 */
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
