#include "holberton.h"

/**
 * _strlen - count length of a string
 * @s: pointer char
 * Return: the length of the string given
 */
int _strlen(char *s)
{
	int i, count;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	return (count);
}
