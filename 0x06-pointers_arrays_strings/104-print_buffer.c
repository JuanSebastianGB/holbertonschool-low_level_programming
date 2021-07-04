#include <stdio.h>
#include "holberton.h"

/**
 * for_print - Function that prints the left or right side
 *@i: Actual position in the buffer
 *@b: pointed buffer
 *@size: buffer size
 *@option: integer 1 or 2 to select for case
 * Return: print
 */

void for_print(int i, char *b, int size, int option)
{
	int j;

	if (option == 1)
	{
		for (j = 0; j < 10 ; j++)
		{
			if ((j + 1) % 2 == 0)
				printf("%02x ", *(b + i + j));
			else
				printf("%02x", *(b + i + j));
		}
	}
	if (option == 2)
	{
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

/**
 * print_buffer - Function that prints the pointed buffer
 *@b: Char pointed to print
 *@size: Length required to print
 *Return: printchar changed
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= size; i++)
	{
		if (i == 0)
		{
			printf("%08x: ", i);
			for_print(i, b, size, 1);
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
			for_print(i, b, size, 2);

		}
	}
	putchar('\n');
}
