#include "holberton.h"

/**
 *puts2 - prints every other character of a string
 *@str: string to be used
 *
 *Return: print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (*(str + i) % 2 == 0)
			_putchar(*(str + i));
		i++;
	}

}
