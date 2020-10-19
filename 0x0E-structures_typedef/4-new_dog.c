#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - malloc and initialize
 * @name: dog name
 * @age: age dog
 * @owner: name owner dog
 * Return: The age, name, owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	if (name != NULL)
		newDog->name = name;
	if (owner != NULL)
		newDog->owner = owner;
	newDog->age = age;
	return (newDog);
}
