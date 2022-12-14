#include "main.h"

/**
 * _islower - determines if the character entered is in lowercase
 * @c - collects a value and stores it as c and checks if it is a lowercase alphabet
 * Description -  checks if it is lowercase alphabet when called on a character
 * It tells if the character is lowercase.
 **/
int _islower(int c)
{
	int i = c;

	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
