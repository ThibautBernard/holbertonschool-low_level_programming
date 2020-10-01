#include "holberton.h"
/**
 * *_strncpy - copy string to dest in n length
 * @dest: string to return
 * @src: string to copy
 * @n: size to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;
	char *ptr;

	ptr = dest;
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		*ptr = src[y];
		ptr++;
	}
	for (; y < n; y++)
	{
		*ptr = '\0';
		ptr++;
	}
	return (dest);
}
