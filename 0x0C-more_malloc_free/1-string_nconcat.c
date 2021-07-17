#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *char *string_nconcat - allocates memry, retunr 98 if fails
 * @s1: string to left
 * @s2: string to right
 * @n: conditional
 * Return: pointer concat
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i = 0, j = 0, k;

	if (!s1)
		i = 0; /*empty string*/
	else
	{
		while (s1[i])
			i++;
	}
	if (!s2)
		j = 0; /*empty string*/
	else
	{
		while (s2[j])
			j++;

	}

	if (n > j)
		n = j;

	pointer = malloc(sizeof * pointer * (i + n + 1));

	if (!pointer)
		return (NULL);

	for (k = 0; k < (i + n); k++)
	{

		if (k < i)
			pointer[k] = s1[k];
		else

			pointer[k] = s2[k - i];
	}
	pointer[k] = '\0';

	return (pointer);
}
