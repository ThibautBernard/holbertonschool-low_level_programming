#include "holberton.h"
#include <stdlib.h>
/**
 * *_memset - fill memory in n range
 * @s: string pointed to
 * @b: char constant at replace
 * @n: number
 * Return: the memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, no;

	no = n;
	for (i = 0; i < no; i++)
	{
		*(s + i) = b;
	}
	return (s);

}
/**
 * *_calloc - allocate array and fill with 0
 * @nmemb: length of the array
 * @size: length of bytes of each element of the array
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(sizeof(size) * (nmemb));
	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, nmemb * size);
	return (arr);
}
