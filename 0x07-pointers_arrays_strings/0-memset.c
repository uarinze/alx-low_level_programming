#include "main.h"

/**
 * _memset - fills memorry with a aconstant byte.
 * @s: - first argument which is a pointer to the array to be filled.
 * @b: - second argumet which is the fill character..
 * @n: - the number of characters to fill
 *
 * Description: this function fills teh first n bytes of memory
 * area pointed to by s with the constant byte b
 * Return: It returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	_putchar('\n');
	return (s);
}
