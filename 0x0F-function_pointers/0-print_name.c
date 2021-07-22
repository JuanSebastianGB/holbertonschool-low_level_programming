#include "function_pointers.h"

/**
 * print_name - prints a name using function
 * @name: string to print
 * @f: function that prints
 * Return: Void, only prints
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
