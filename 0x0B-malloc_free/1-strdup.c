#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
	int i = 0, j;

	if (!str)
		return (NULL);
	while (str[i])
		i++;
	i++; /* Include null char*/
	copy = malloc(sizeof(char) * i);

	if (!copy)
		return (NULL);
	for (j = 0; j < i; j++)
		*(copy + j) = *(str + j);

	return (copy);
}
