#include <stdio.h>
#include "holberton.h"


/**
 * *rot13 - Function that codify a char
 *@n: Char to change
 *
 *Return: char changed
 */

char *rot13(char *n)
{
	char aux1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char aux2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j, size = (int) sizeof(aux1) / sizeof(char);

	while (*(n + i))
	{
		for (j = 0; j < size; j++)
		{
			if (*(n + i) == aux1[j])
			{
				*(n + i) = aux2[j];
				break; /* Out of the for at he moment that are same */
			}
		}
		i++;
	}

	return (n);
}
