#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a char that contains the binary
 *
 * Return: binary number in ui
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, binary_increment = 0;

	/*----------Validations-------- */
	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	/* -------  */
	i = 0;
	while (b[i])
	{
		binary_increment <<= 1;
		if (*(b + i) == '1')
			binary_increment += 1;
		i++;
	}
	return ((unsigned int)binary_increment);
}
