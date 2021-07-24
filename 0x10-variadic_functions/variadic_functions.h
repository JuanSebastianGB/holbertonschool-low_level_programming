#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct impre - pirint deppending of char
 * @t: char that say what is the type
 * @f: pointer to function
 */

typedef struct impre
{
	char *t;
	void (*f)(va_list);

}impresion;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H */
