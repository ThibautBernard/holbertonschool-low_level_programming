#include "holberton.h"

/**
 * wildcmp - string compare
 * @s1: the first string
 * @s2: the second string
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
		if (*s2 == '\0' && *s1 == '\0')
		{
			return (1);
		}
		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		if (*s1 != *s2 && *(s2 - 1) == '*' && *s2 != '*')
			return (wildcmp(s1 + 1, s2));
		if (*s2 == '*')
		{
			if (*(s2 + 1) != '*')
				return (wildcmp(s1 + 1, s2 + 1));
			else
				return (wildcmp(s1, s2 + 1));
		}
		return (0);
}
