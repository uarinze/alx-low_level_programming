#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name in the format
 * of the function poointer passed to it
 * @name: name to print
 * @f: function pointer
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL)
		return;
	if (f == 0)
		return;
	f(name);
}
