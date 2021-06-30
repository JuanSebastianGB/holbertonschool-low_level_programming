#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Creates random password.
 *
 * Return: Always 0.
 */
int main(void)
{
	char pass[50]; /* Password container */
	int i = 0, checksum = 0, m1, m2, diff, limit = 2772;
	int min = 33, max = 122; /* ! --> z (char inside password) */

	srand(time(0)); /*Set the seed for random number generation */
	checksum = 0;
	while (checksum < limit) /* limit is 0xad4 verif. using r2*/
	{
		/* pass[i] = min + rand() % 94;*/
		pass[i] = (rand() % (max - min)) + min;
		checksum += pass[i++];

	}
	pass[i] = '\0';

	if (checksum != limit)
	{
		diff = checksum - limit;
		m1 = diff / 2;
		m2 = diff / 2; /* split at half in case is < min */
		/* run at this size the times needed */
		if ((checksum - limit) % 2 != 0)
			m1 = m1 + 1;

		i = 0;
		while (pass[i])
		{
			if(pass[i] - m1 >= min) /* guarantee subs >= 33 */
			{
				pass[i] = pass[i] - m1;
				break; /* need to restart again in any case  */
			}

			i++;
		}

		i = 0;
		while (pass[i])
		{
			if(pass[i] - m2 >= min) /* guarantee subs >= 33 */
			{
				pass[i] = pass[i] - m2;
				break;
			}

			i++;
		}
	}

		printf("%s", pass);

	return (0);
}
