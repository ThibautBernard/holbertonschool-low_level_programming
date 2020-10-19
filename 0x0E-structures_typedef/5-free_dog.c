#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free structure
 * @d: struct given
 * Return: free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
