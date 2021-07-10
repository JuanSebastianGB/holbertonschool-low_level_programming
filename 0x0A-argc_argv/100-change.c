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
	int cents, coins[] = {25, 10, 5, 2, 1}, length = 5, i, acum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents > 0) /*If is number and different of zero*/
	{
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
	else
	{
		printf("0\n");
		return (1);
	}

	printf("%i\n", acum);
	return (0);
}
