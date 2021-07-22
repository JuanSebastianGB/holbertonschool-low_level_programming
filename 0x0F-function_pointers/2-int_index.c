#include "function_pointers.h"

/**
 * int_index - This function search for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function that compare values
 * Return: Index of the element of the array that find
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for ( ; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
