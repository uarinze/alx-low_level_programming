#include "main.h"

/**
 * swap_int - takes a pointer to an int and updates
 * the value it points to
 * @a: - a pointer as first argument
 * @b: - a pointer as second argument
 *
 * Description: this function takes to integrs and swaps them
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}
