#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a character
 * @arg: argument of type va_list
 */
void print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	printf("%c", ch);
}

/**
 * print_int - prints an integer
 * @arg: argument of type va_list
 */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * print_float - prints a float
 * @arg: argument to type va_list
 */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - prints a string
 * @arg: argument of type va_list
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: argument type
 * @...: other arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";
	printer_t func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i++)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(func[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			func[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

