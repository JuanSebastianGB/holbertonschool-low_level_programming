#include <stdio.h>

/**
 *main - entry point
 *@argc: number of arguments called in compilation.
 *@argv: Array that include the elements used to compile
 *Return: always 0
 **/

int main(int argc, char *argv[])
{
	if (argc < 1)
		return (-1);

	printf("%s\n", *(argv + argc - 1));

	return (0);
}
