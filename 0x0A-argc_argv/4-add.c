#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - entry point
 *@argc: number of arguments called in compilation.
 *@argv: array that has the elements used to compile
 *Return: always 0
 **/

int main(int argc, char *argv[])
{
	int i = 1, adding = 0;

	while (i < argc)
	{
		if (!atoi(argv[i]))
		{
			puts("Error");
			return (1);
		}
		adding += atoi(argv[i]);
		i++;
	}

	printf("%d\n", adding);

	return (0);
}
