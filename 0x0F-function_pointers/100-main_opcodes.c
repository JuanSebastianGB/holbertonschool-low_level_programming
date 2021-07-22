#include <stdio.h>
#include <stdlib.h>

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
	f = main;

	for ( ; i < atoi(argv[1]) - 1; i++)
	{
		 /* Running code block containing main*/
		byte = *(unsigned char *)(f + i);
		printf("%.2x", byte);
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
