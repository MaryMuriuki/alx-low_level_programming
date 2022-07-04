#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - iitializes a var of type struct dog
 * @d: pointer to stuct dog to be initialized
 * @name: name to init
 * @owner: owner to init
 * @age: age to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}
