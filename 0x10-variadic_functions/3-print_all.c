#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @c: char to print
 * Return: print
 *
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - print int
 * @i: integer to print
 * Return: print
 *
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - print float number
 * @f: float to print
 * Return: print
 *
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - print string
 * @s: sitring to print
 * Return: print
 *
 */
void print_string(va_list s)
{
	char *word = va_arg(s, char *);

	if (word == NULL)
	{
		word = "(nil)";
	}
	printf("%s", word);

}

/**
 * print_all - print the function deppending of input char
 * @format: string to verify
 * Return: void -print
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;
	char *separador = "";

	impresion valores[] = {

		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}

	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (valores[j].t != NULL)
		{
			if (*(valores[j].t) == format[i])
			{
				printf("%s", separador);
				valores[j].f(ap);
				separador = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
