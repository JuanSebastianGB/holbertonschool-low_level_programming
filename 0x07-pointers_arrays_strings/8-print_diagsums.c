#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square mat of int.
 *@a: array input
 *@size: size of array
 *
 *Return: print
 */

void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size * size ; i++)
	{
		if (i % (size + 1) == 0)
			diag1 = diag1 + a[i];
		if (i % (size - 1) == 0 && i != (size * size) - 1 && i > 0)
			diag2 = diag2 + a[i];
	}

	printf("%i, %i\n", diag1, diag2);
}
