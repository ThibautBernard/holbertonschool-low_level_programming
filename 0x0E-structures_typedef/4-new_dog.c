#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - count length of a string
 * @s: pointer char
 * Return: the length of the string given
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	return (count);
}

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
	int l_name = 0, l_owner = 0;

	l_name = _strlen(name);
	l_owner = _strlen(owner);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(char) * (l_name + 1));
	if (newDog->name == NULL)
		return (NULL);
	newDog->owner = malloc(sizeof(char) * (l_owner + 1));
	if (newDog->owner == NULL)
		return (NULL);
	if (name != NULL)
		newDog->name = name;
	if (owner != NULL)
		newDog->owner = owner;
	newDog->age = age;
	return (newDog);
}