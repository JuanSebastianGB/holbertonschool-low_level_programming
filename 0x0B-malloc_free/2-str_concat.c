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

	int size, size_s1, size_s2, i, j, k;
	char *pointer;

	size_s1 = sizeof(s1) - 1;
	size_s2 = sizeof(s2) - 1;
	size = size_s1 + size_s2 + 1;

	pointer = malloc(size * sizeof(char));
	if(!pointer)
		return (NULL);
	for (i = 0; i < size_s1; i++)
		pointer[i] = s1[i];
	for (j = size_s1 - 1, k = 0; j < size ; j++, k++)
	{
		pointer[j] = s2[k];
	}

	return (pointer);
}
