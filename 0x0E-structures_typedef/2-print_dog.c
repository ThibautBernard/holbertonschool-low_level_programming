#include "dog.h"
#include <stdio.h>

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
 * print_dog - print value of this struc
 * @d: struct given
 * Return: The age, name, owner
 */
void print_dog(struct dog *d)
{
	int l_name, l_owner;

	l_name = _strlen(d->name);
	l_owner = _strlen(d->owner);
	if (d != NULL)
	{
		if (d->name != NULL || l_name > 0)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL || l_owner > 0)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
