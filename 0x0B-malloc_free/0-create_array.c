#include "holberton.h"
#include <stdlib.h>


/**
 * *create_array - creates an array of chars.
 * @size: size of array.
 * @c: Specific char to initialice
 *
 *Return: pointer or null if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	pointer = malloc(sizeof(char) * size);

	if (pointer == NULL || !size)
		return (NULL);
	for (i = 0; i < size; i++)
		*(pointer + i) = c;

	return (pointer);
}
