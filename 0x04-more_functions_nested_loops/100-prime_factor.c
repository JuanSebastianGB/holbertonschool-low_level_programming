#include <stdio.h>

/**
 * main - main function
 *
 * Return: always(0);
 */

int main(void)
{
	long int i, n = 612852475143;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0) /* identfying numbers that are divisible */
		{
			if (n == i) /* The last iteration */
				printf("%li\n", i);
			n = n / i; /* n gets a new value after this iteration */
			i = 1; /* Reset i value for the lopp of the new number*/
		}
	}
	return (0);
}
