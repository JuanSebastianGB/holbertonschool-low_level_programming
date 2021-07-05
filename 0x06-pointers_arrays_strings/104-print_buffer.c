#include <stdio.h>
#include "holberton.h"

/**
 *part_hexa - function that prints the hexadecimal part with
 *@k: The actual row
 *Return: print
 */
void part_hexa(int k)
{
	printf("%08x: ", k);
}

/**
 *part_hexax2 - function that prints the hexadecimal part in pair contents
 *@size: size of buffer
 *@b: buffer pointed
 *@i: actual position in buffer
 *Return: print
 */

void part_hexax2(char *b, int size, int i)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if ((i + j) < size)
			printf("%02x", *(b + i + j));
		else
			printf("  ");
		if ((j + 1) % 2 == 0)
			putchar(' ');

	}
}

/**
 *part_char - function that prints the string part (3)
 *@b: char pointed to print
 *@i: actual position in buffer
 *@size: size of buffer
 *Return: print
 */
void part_char(char *b, int i, int size)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if ((i + j) < size)
		{
			if (*(b + i + j) > 31 && *(b + i + j) < 127)
				putchar(*(b + i + j));
			else
				putchar('.');
		}
	}
	putchar('\n');
}

/**
 * print_buffer - Function that prints the pointed buffer
 *@b: Char pointed to print
 *@size: Length required to print
 *Return: print
 */

void print_buffer(char *b, int size)
{
	int i, k = 0;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			if (i % 10 == 0)
			{
				part_hexa(k);
				part_hexax2(b, size, i);
				part_char(b, i, size);
				k += 10;
			}
		}
	}
}
