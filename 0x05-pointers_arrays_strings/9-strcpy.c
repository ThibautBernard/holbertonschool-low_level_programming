#include "holberton.h"
/**
 * *_strcpy - copy array to another one with \0
 * @dest: new array
 * @src: original array
 * Return: the new array
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/*dest[i + 1] = '\0';*/
	return (dest);
}
