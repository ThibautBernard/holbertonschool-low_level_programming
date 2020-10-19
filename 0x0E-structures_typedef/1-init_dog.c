#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a struct
 * @d: struct given
 * @name: name of the dog to give
 * @age: age of the dog to give
 * @owner: name of the owner to give
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
