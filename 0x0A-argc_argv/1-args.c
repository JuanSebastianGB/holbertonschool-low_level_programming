#include <stdio.h>

/**
 *main - entry point
 *@argc: number of arguments called in compilation.
 *@argv: array that has the elements used to compile
 *Return: always 0
 **/

int main(int argc, char *argv[])
{
	*argv += 0;
	if (!*argv)
		return (-1);

	printf("%i\n", argc - 1);/*argc include to gcc*/

	return (0);
}
