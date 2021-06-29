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
	int i = 0;

	for (i = 1; i <= n; i++)
	{
		if (i < n)
		{
			printf("%i, ", *(a + i - 1));
		}
		else
		{
			printf("%i\n", *(a + i - 1));
		}
	}

}
