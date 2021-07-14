#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *alloc_grid - return a pointer to a 2 dimentional array
 * @width: widht.
 * @height: height.
 *
 *Return: pointer multidimensional
 */

int **alloc_grid(int width, int height)
{

	int **pointer;
	int i, j;

	if (width < 0 || height < 0)
		return (NULL);

	/*Array of arrays*/
	pointer = (int **)malloc(sizeof(int *) * height);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* taje row one by one*/
		pointer[i] = (int *)malloc(sizeof(int) *width);
		for (j = 0; j < width; j++)
		{
			pointer[i][j] = 0;
		}

	}
	return (pointer);
}
