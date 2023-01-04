#include "main.h"

/**
 * set_string - sets the value of a pointer
 * @s: - first argument, is a pointer to string.
 * @to: - copies this to the first.
 *
 * Description: this function sets the value
 * of a pointer to a char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
