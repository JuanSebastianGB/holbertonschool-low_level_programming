#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range -  create array of integers from min to max
 * @min: min value
 * @max: max value
 *
 * Return: pointer of asc ordered integers
 *
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i;

	if (min > max)
		return (NULL);
	pointer = malloc(sizeof(*pointer) * (max - min + 1));
	if (!pointer)
		return (NULL);
	for (i = min; i <= max; i++)
		pointer[i - min] = i;

	return (pointer);
}
