#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - allocate array and fill with 0
 * @nmemb: length of the array
 * @size: length of bytes of each element of the array
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc((nmemb + 1) * sizeof(size));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	arr[i] = '\0';
	return (arr);
}
