#include "holberton.h"

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
