#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Object of dogs
 * @name: name of the dog
 * @age: Age of the dog (still not specific if years or what)
 * @owner: Owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;/* defining new type of structure dog */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
