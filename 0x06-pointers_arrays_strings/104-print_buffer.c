#include <stdio.h>
#include "holberton.h"


/**
 * print_buffer - Function that prints the pointed buffer
 *@b: Char pointed to print
 *@size: Length required to print
 *Return: printchar changed
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		if (i == 0)
		{
			printf("%08x: ", i);
			for (j = 0; j < 10 ; j++)
			{
				if ((j + 1) % 2 == 0)
					printf("%02x ", *(b + i + j));
				else
					printf("%02x", *(b + i + j));
			}
		}
		if (*(b + i) <= 9)
			putchar('.');
		else
		{
			if (*(b + i) != '\n')
				putchar(*(b + i));
		}
		if ((i + 1) % 10 == 0)
		{
			printf("\n%08x: ", i + 1);
			for (j = 0; j < 10; j++)
			{
				if (i + 1 + j < size)
				{
					if ((j + 1) % 2 == 0)
						printf("%02x ", *(b + i + 1 + j));
					else
						printf("%02x", *(b + i + 1 + j));
				}
				else
				{
					printf("  ");
					if ((j + 1) % 2 == 0)
						putchar(' ');
				}
			}
		}
	}
	putchar('\n');
}
