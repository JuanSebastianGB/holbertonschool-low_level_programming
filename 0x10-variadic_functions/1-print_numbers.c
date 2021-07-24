#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator to print between
 * @n: number of integers
 * Return: void, print
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i = 0;

	va_start(list, n);

	while (i < n)
	{
		printf("%i", va_arg(list, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	va_end(list);
	putchar('\n');
}
