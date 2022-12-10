#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Prints to standard error
 *
 * Reurns: 1 (Unsuccessful) 
 **/

int main(void)
{
	char quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote);

	return 1;
}
