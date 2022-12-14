#include "main.h"

int _islower(int c)
{
	int i = c;

	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
