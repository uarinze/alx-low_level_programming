#include "main.h"

int _isalpha(int c)
{
	int i;

	i = c;
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		return (1);
	else
		return (0);
}
