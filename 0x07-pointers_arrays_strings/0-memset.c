#include "holberton.h"

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
