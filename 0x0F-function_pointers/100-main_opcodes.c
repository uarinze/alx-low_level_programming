#include <stdio.h>
#include <stdlib.h>

/**main - prints its opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0);
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int (*adrs)(int , char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < j; i++)
	{
		opcode = *(unsigned char *)adrs;
		printf("%.2x", opcode);

		if (i == j - 1)
			continue;
		printf(" ");

		adrs++;
	}
	printf("\n");

	return (0);
}
