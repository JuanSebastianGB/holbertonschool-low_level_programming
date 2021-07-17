#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc -  allocates memory for an array
 * @nmemb: number of array elements
 * @size: size
 *
 * Return: pointer
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc((size_t)nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		pointer[i] = 0;

	return (pointer);
}
