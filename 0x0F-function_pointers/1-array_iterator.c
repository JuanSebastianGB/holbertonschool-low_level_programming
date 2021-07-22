#include "function_pointers.h"

/**
 * array_iterator - function that execute another function in an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function to execute
 * Return: Nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for ( ; i < size; i++)
			action(array[i]);
	}
}
