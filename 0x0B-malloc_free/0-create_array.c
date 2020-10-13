#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - create an array of size parameters
 * and initialize it with param c
 * @size: length of array
 * @c: char to put in this array
 * Return: array full or pointer of null if allocation not working
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (size == 0)
		return (0);
	if (array == NULL)
		return (array);
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
