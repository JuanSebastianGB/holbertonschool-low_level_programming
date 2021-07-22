#include <stdio.h>
#include <stdlib.h>

void print_main(char *s, int n);

/**
 * main - Call to itself to access inside information
 * @argc: number of elements
 * @argv: arry of pointer
 * Return: 0 if all it's ok
 *
 */

int main(int argc, char *argv[])
{
	int (*f)(int, char**); /* Calling main function itself to process */
	int byte, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_main((char *)&main, atoi(argv[1])); /* Send main's adress*/

	return (0);
}

/**
 * print_main - print opcodes
 * @s: adrress of main
 * @n: number of bytes
 * Return: Void - print
 */

void print_main(char *s, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%.2hhx", *(s + i));
		if (i < n - 1)
			putchar(' ');
		i++;
	}
	putchar('\n');
}
