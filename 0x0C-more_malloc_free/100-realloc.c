#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_memcpy - copy memory until n to dest
 * @dest: string pointed to
 * @src: string pointed to
 * @n: number
 * Return: dest memory copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, nb;

	nb = n;
	for (i = 0; i < nb; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);

}
/**
 * *_realloc - reallocate higher size with content
 * @ptr: pointer to the array source
 * @old_size: size of bytes of ptr
 * @new_size: new size of bytes of new ptr
 * Return: new ptr with new size if success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		str = malloc(old_size + new_size);
		if (str == NULL)
			return (NULL);
	}
	else if (new_size > old_size)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
		_memcpy(str, ptr, old_size);
	}
	free(ptr);
	return (str);
}
