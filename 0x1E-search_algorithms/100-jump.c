#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Index where is found or -1 if not
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, left, right, i, min;

	if (array == NULL)
		return (-1);
	left = 0;
	step = sqrt(size);
	right = step;
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	while (right < size && array[left] < value)
	{
		if (array[right] >= value)
			break;
		left += step;
		right += step;
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	}
	/*Not found or going further of the size*/
	if (left >= size || array[left] > value)
		return (-1);

	min = right < size ? right : size;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = left; i < min; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
