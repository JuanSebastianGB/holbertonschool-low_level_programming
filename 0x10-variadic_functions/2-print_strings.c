#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between
 * @n: number of strings
 * Return: void, print
 */


void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list list;
	char *word;
	unsigned int i = 0;

	va_start(list, n);

	while (i < n)
	{
		word = va_arg(list, char *);
		if (word)
			printf("%s", word);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	va_end(list);
	putchar('\n');
}
