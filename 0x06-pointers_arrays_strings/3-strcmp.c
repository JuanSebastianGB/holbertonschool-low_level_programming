#include "holberton.h"

/**
 * *_strcmp - compare two strings
 *@s1: pointer 1
 *@s2: pointer 2
 *Return: An integer + - or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, aux = 0, aux2 = 0, result = 0;

	while (*(s1 + i))
	{
		aux = aux + s1[i];
		i++;
	}
	i = 0;
	while (*(s2 + i))
	{
		aux2 = aux2 + s2[i];
		i++;
	}
	if (aux > aux2)
		result = 15;
	if (aux < aux2)
		result = -15;

	return (result);
}
