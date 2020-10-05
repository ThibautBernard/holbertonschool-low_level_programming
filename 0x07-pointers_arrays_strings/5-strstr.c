#include "holberton.h"
/**
 * *_strstr - pointing on word matching with needle
 * @haystack: string pointed to
 * @needle: word to be match with haystack
 * Return: pointer haystack or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, y;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (y = 0; haystack[y] != '\0'; y++)
		{
			if (needle[i] == haystack[y])
			{
				if (needle[i + 1] == haystack[y + 1])
				{
					haystack = haystack + y;
					return (haystack);
				}
			}
		}
	}
	return (0);
}
