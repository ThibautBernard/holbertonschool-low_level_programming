#include "holberton.h"
/**
 * *_strncat - append string src in function of n to des
 * @dest: string to return
 * @src: string to append
 * @n: size to copy
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y, i;
	char *ptr;

	ptr = dest;
	for (y = 0; dest[y] != '\0'; y++)
	{
		ptr++;
	}
	for (i = 0; src[i] != '\0' && i < n ; i++)
	{
		*ptr = src[i];
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
