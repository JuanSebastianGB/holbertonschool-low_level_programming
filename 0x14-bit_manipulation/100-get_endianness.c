#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 1 if big Endian, otherwise 0
 *
 */

int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (!*endian)
		return (0);

	return (1);
}
