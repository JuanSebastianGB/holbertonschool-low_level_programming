#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - apply the sum operation to n imputs
 * @n: number of inputs
 * Return: sum of all input integers
 *
 *
 */


int sum_them_all(const unsigned int n, ...)
{

	va_list list;
	int sum = 0;
	unsigned int i = 0;

	va_start(list, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);


	return (sum);
}
