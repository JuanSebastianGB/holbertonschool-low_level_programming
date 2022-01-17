#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: Int that represent index where is found,
 * -1 if not present or NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value chacked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}