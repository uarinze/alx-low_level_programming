#include "main.h"

/**
 * main - Entry point
 *
 * prints _putchar followed by a new line
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int pchar[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(pchar[i]);
	}
	_putchar(10);

	return (0);
}
