#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: int
 */
int interpolation_search(int *array, size_t size, int value)
{

	size_t start, end, middle;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;
	for (; array[start] != array[end];)
	{
		middle = start + (((double)(end - start) /
						   (array[end] - array[start])) *
						  (value - array[start]));
		if (middle < start || middle > end)
		{
			printf("Value checked array[%ld] is out of range\n", middle);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", middle, array[middle]);
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}

	return (-1);
}
