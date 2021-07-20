#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print all information about dog
 * @d: variable of kind dog
 * Return: print the information about dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{

		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if ((*d).owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", (*d).owner);
	}

}
