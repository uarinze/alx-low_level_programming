#include "main.h"

/**
 * flip_bits - returns the number
 * of bits uou would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned long int bits = 0;

	while (diff > 0)
	{
		bits += (diff & 1);
		diff >>= 1;
	}
	return (bits);
}
