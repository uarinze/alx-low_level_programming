#include "main.h"

/**
 * _isalpha - checks if the character is an alphabet
 * @c:- collects the value to be checked and
 * determine if it is an alphabet  character
 * 
 * Description: it checks a value stored in c if it is alphabet
 * Return: It returns 1 when true and 0 if otherwise.
 **/

int _isalpha(int c)
{
	int i;

	i = c;
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		return (1);
	else
		return (0);
}
