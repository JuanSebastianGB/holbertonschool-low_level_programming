#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: Number to flip
 * @m: number focus
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	n ^= m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}

	return ((unsigned int)i);
}
