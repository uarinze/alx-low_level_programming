#include " variadic_functions.h"
#include <stdarg.h>

/**sum_them_all - returns the sum
 * of all its parameters
 * @n: first argument
 * @...: other arguments
 *
 * Return: 0 if n == 0; else the sum
 * of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sums;
	unsigned int i;
	unsigned int sum = 0;

	va_start(sums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sums, int);
	va_end(nums);

	return (sum);
}
