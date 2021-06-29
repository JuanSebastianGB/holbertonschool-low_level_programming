#include "holberton.h"

/**
 *puts_half - prints second half of the string
 *@str: string to be used
 *
 *Return: print second of half of the string
 */

void puts_half(char *str)
{
	int i = 0, j = 0, length;

	while (*(str + i))
		i++;
	length = i / 2;
	if (i % 2 == 0)
		length = (i - 1) / 2;
	while (str[j])
	{
		if (j > length)
			_putchar(*(str + j));
		j++;
	}
	_putchar('\n');

}
