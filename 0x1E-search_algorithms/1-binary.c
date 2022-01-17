#include "search_algos.h"

/**
 * print_pointer - Function to print an array
 *
 * @array: Array to print
 * @size: Size of the array
 * Return: Nothing
 */
void print_pointer(int *array, int size)
{
	int i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %i", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
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

	if (array == NULL || value <= 0)
		return (-1);
	start = 0;
	end = size - 1;

	print_pointer(array + start, end - start + 1);

	for (; start < end;)
	{
		middle = (start + end) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			start = middle + 1;
		else
			end = middle;
		print_pointer(array + start, end - start + 1);
	}

	return (-1);
}
