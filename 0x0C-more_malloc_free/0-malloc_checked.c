#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memry, retunr 98 if fails
 * @b: char that expects * size values
 *
 * Return: void pointer, and 98 in fail case
 *
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (!pointer)
		exit(98);

	return (pointer);
}
