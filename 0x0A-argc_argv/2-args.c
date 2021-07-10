#include <stdio.h>

/**
 *main - entry point
 *@argc: number of arguments called in compilation.
 *@argv: array that has the elements used to compile
 *Return: always 0
 **/

int main(int argc, char *argv[])
{
	int i;

	if (!*argv || argc <= 0)
		return (-1);
	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));

	return (0);
}
