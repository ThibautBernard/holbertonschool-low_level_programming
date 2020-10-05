#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - return last occurence match with c
 * @s: string pointed to
 * @c: char to match
 * Return: last occurence or null
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
