#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function, the entry point
 * @argc: number of input elements
 * @argv: array with the imput elements
 * Return: void
 */

int main(int argc, char *argv[])
{

	int number1, number2, output;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);

	function = get_op_func(argv[2]);

	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	output = function(number1, number2);

	printf("%d\n", output);


	return (0);
}
