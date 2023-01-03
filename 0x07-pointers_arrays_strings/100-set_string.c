#include "main.h"

/**
 * set_string -sets the value of a pointer
 * to a char.
 * @s: - first argument pointer to string
 * @to: - copies this to the first
 *
 * Description: - function that sets the value
 * of a pointer to a char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
