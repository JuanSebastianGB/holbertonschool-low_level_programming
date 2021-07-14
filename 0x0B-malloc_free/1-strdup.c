#include "holberton.h"
#include <stdlib.h>


/**
 * *_strdup - returns a pointer to a new string copyed from orig.
 * @str: string to copy.
 *
 *
 *Return: pointer to string copied
 */

char *_strdup(char *str)
{

	char *copy;
	unsigned int i;

	copy = malloc(sizeof(str));
	if (copy == NULL)
		return (NULL);
	for (i = 0; *(str + i); i++)
		*(copy + i) = *(str + i);

	return (copy);
}
