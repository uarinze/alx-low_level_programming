#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * received in a new line and ends in \n
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: - return 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
