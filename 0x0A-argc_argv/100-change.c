#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *isnumber - define if an input is number or not
 *@input: char to verify
 *
 *Return: 1 if is number otherwise 0
 */

int isnumber(char *input)
{
	int i;

	for (i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]))
			return (0);
	}
	return (1);
}

/**
 *main - entry point
 *@argc: number of arguments called in compilation.
 *@argv: array that has the elements used to compile
 *Return: always 0
 **/

int main(int argc, char *argv[])
{
	int cents, coins[] = {25, 10, 5, 2, 1}, length = 5, i, acum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (isnumber(argv[1]))
	{
		cents = atoi(argv[1]);
		for (i = 0; i < length; i++)
		{
			if (cents - coins[i] >= 0)
			{
				cents -= coins[i];
				acum++;
				i = -1;
			}
		}
	}
	printf("%i\n", acum);
	return (acum);
}
