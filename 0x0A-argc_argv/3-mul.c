#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: number of arguments called in compilation.
 *@argv: array that has the elements used to compile
 *Return: always 0
 **/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
