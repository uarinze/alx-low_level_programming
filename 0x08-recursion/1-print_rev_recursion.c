#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * follwed by a new line
 * @s: - string to print
 *
 * Desctription: prints a string in reverse follwed by \n
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
