#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - creates a new struct object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = malloc(sizeof(name) + 1);
	char *o = malloc(sizeof(owner) + 1);
	dog_t *dog;

	if (n == NULL || o == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}

	strcpy(n, name);
	strcpy(o, owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}

	dog->name = n;
	dog->age = age;
	dog->owner = o;

	return (dog);
}
