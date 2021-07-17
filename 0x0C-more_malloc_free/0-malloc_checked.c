#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (!pointer)
		exit(98);

	return (pointer);
}
