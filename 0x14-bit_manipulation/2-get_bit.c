#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: Number to look into
 * @index: positicion in bits from right to left starting in 0
 * Return: return the bit found at index position
 * If index exced the max possible number return -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int number;

	/* Unsigned long int in a x64 bits machine */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	number = 1 << index;
	if (n & number)
		return (1);

	return (0);
}
