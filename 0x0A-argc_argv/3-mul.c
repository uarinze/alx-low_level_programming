#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: - return 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", (i * j));

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
