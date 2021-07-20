#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: return a pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer;
	int i = 0, l_name, l_owner;

	pointer = malloc(sizeof(*pointer));
	if (!pointer || !name || !owner)
		return (NULL);
	(*pointer).age = age;
	while (name[i]) /* Setting memory for dog name */
		i++;
	l_name = i;
	(*pointer).name = malloc(sizeof(char) * (l_name + 1));
	if (!(*pointer).name)
	{
		free(pointer);
		return (NULL);
	}
	for (i = 0; name[i]; i++) /* Filling dog name */
		(*pointer).name[i] = name[i];
	i = 0;
	while (owner[i]) /* Setting memory for dog owner*/
		i++;
	l_owner = i;
	(*pointer).owner = malloc(sizeof(char) * (l_owner + 1));
	if (!(*pointer).owner)
	{
		free((*pointer).name);
		free(pointer);

		return (NULL);
	}

	for (i = 0; owner[i]; i++) /* Filling dog owner */
		(*pointer).owner[i] = owner[i];
	return (pointer);
}
