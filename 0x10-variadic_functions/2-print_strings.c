#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * followed by a new line
 * @separator: sep argument
 * @n: argument 2
 * @...: other arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	char *str;
	unsigned int i;

	va_start(pr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(pr);
}
