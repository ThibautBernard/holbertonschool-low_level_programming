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

	if (s == NULL)
		return (0);
	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	return (count);
}
/**
 * *str_concat - concatenate two string
 * given into one string with null terminated
 * @s1: first string given
 * @s2: second string given
 * Return: new string if success
 */
char *str_concat(char *s1, char *s2)
{
	char *n_string;
	int i, y, length_s1 = 0, length_s2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
		{
			length_s1 = 0;
			length_s2 = _strlen(s2);
		}
		if (s2 == NULL)
		{
			length_s2 = 0;
			length_s1 = _strlen(s1);
		}
		if (s1 && s2 == NULL)
		{
			length_s1 = _strlen(s1);
			length_s2 = _strlen(s2);
		}
	}
	n_string = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (n_string != NULL)
	{
		for (i = 0; i < length_s1; i++)
			*(n_string + i) = *(s1 + i);
		for (y = 0; y < length_s2; y++)
		{
			*(n_string + i) = *(s2 + y);
			i++;
		}
	*(n_string + i) = '\0';
	}
	else
		return (NULL);
	return (n_string);
}
