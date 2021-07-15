#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - concatenates all the arguments
 * @ac: counter
 * @av: matrix.
 *
 *Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, size = 0, aux = 0;
	char *pointer;

	/* validations */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* finding size */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
		size++; /* reserved for '\n' */
	}
	size = size + 1; /* reserved for all including '\0' */

	pointer = malloc(sizeof(char) * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			pointer[aux] = av[i][j];
			aux++;
		}
		pointer[aux] = '\n';
		aux++;
	}
	pointer[aux] = '\0';
	return (pointer);
}
