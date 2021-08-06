#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert in binary
 * Return: binary printed
 */

void print_binary(unsigned long int n)
{
	if (n > 1) /*Base case n <= 1*/
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
	/* & is equal %10 in decimal notation */
}
