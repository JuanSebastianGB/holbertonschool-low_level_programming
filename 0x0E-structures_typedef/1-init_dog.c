#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable of type dog
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
