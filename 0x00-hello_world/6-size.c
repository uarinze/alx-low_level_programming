#include <stdio.h>
/**
 * main - Entry point
 *
 * prints size of
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d bytes(s)", sizeof(int));
	printf("Size of long int: %ld bytes(s)", sizeof(long int));
	printf("Size of long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of float: %f byte(s)", sizeof(float));
	return (0);
}
