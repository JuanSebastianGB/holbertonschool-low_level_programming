#include <stdio.h>
#include "holberton.h"


/**
 * reverse_array - reverse the array
 *@a: pointer to be reversed
 *@n: int of length array
 *Return: print
 */

void reverse_array(int *a, int n)
{
int i = 0, aux;
while (i < n - 1)
{
aux = a[i];
a[i] = a[n - 1];
a[n - 1] = aux;
i++;
n--;
}
}
