#ifndef _SEARCH_ALGO_H_
#define _SEARCH_ALGO_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Implementing linear search*/
int linear_search(int *array, size_t size, int value);
/* Implementing binary search*/
int binary_search(int *array, size_t size, int value);
/* Implementing Jump search*/
int jump_search(int *array, size_t size, int value);
/* Implementing interpolation search*/
int interpolation_search(int *array, size_t size, int value);

#endif
