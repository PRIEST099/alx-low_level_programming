#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a struct
 * @d: struct to initialise
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
