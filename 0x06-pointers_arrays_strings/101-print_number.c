#include <stdio.h>
#include "holberton.h"


/**
 * print_number - Function that prints an integer number
 *@n: int to print
 *
 *Return: print
 */

void print_number(int n)
{
 	unsigned int bu = n;

	if (n < 0)
	{
		_putchar('-');
		bu = bu * -1;
	}

	if ((bu / 10) > 0)
		print_number(bu / 10);
	_putchar((bu % 10) + '0');


}
