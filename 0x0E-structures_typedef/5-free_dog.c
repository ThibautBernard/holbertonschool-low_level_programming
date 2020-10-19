#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free structure
 * @d: struct given
 * Return: free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
