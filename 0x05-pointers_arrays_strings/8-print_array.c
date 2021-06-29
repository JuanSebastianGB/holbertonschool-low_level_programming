#include <stdio.h>
#include "holberton.h"

/**
 *print_array - prints n elements of array of integers
 *@a: pointer input
 *@n: integer input
 *Return: print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%i", *(a + i));
		if (i <= n - 2)
			printf(", ");
	}
	printf("\n");

}
