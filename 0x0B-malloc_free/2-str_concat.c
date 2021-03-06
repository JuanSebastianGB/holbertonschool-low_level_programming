#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings..
 * @s1: left string.
 * @s2: right string
 *
 *Return: pointer with string merged
 */

char *str_concat(char *s1, char *s2)
{

	int i = 0, j = 0, size, l;
	char *pointer;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i])
			i++;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		while (s2[j])
			j++;

	}

	size = i + j + 1;
	pointer = malloc(sizeof(char) * size);
	if (!pointer)
		return (NULL);

	for (l = 0 ; l < i; l++)
		pointer[l] = s1[l];
	for (l = 0; l < j; l++)
		pointer[l + i] = s2[l];
	pointer[i + j] = '\0';

	return (pointer);
}
