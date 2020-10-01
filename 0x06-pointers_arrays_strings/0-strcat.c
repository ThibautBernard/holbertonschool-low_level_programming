#include "holberton.h"
/**
 * *_strcat - append string src to dest
 * @dest: string to return
 * @src: string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int y, i;
	char *ptr;

	ptr = dest;
	for (y = 0; dest[y] != '\0'; y++)
	{
		ptr++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}
	*ptr = '\0';
	return (dest);

}
