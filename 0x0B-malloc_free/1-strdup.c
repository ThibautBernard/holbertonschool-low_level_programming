#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - count length of a string
 * @s: pointer char
 * Return: the length of the string given
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	return (count);
}
/**
 * *_strdup - copy string str to another and return new string if success
 * @str: string given
 * Return: new string
 */
char *_strdup(char *str)
{
	char *n_string;
	int i, length_str = 0;

	if (str == NULL)
		return (NULL);
	length_str = _strlen(str);
	n_string = malloc(length_str + 1 * sizeof(char));
	if (n_string == NULL)
		return (NULL);
	for (i = 0; i < length_str; i++)
		*(n_string + i) = *(str + i);
	*(n_string + i) = '\0';
	return (n_string);
}
