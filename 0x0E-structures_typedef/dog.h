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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
