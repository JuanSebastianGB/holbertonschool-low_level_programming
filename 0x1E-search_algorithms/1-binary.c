#include "search_algos.h"

/**
 * print_pointer - Function to print an array
 *
 * @array: Array to print
 * @start: Left index of array
 * @end: Right index of array
 * Return: Nothing
 */
void print_pointer(int *array, int start, int end)
{
	int i;

	printf("Searching in array:");
	for (i = start; i < end; i++)
		printf(" %d,", array[i]);
	printf(" %i\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int that represents the index where the val was found
 */
int binary_search(int *array, size_t size, int value)
{

	size_t start, end, middle;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;

	for (; start <= end;)
	{
		print_pointer(array, start, end);
		middle = (start + end) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}

	return (-1);
}
