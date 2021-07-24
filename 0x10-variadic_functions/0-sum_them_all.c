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
	int i = 0, sum = 0;

	va_start(list, n);

	if (!n)
		return (0);

	while (i < (int)n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);


	return (sum);
}
