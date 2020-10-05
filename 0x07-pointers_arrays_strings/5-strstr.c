#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - pointing on word matching with needle
 * @haystack: string pointed to
 * @needle: word to be match with haystack
 * Return: pointer haystack or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, y = 0, m = 0, lenth = 0;

	while (needle[m])
	{
		m++;
		lenth++;
	}
	for (; haystack[i] != '\0';)
	{
		for (y = 0; (needle[0] == haystack[i]) && needle[y]; y++)
		{
			if (needle[y] == haystack[i + y])
			{
				y++;
			}
			else
				break;
		}
		if (y == lenth || (y - 1) == lenth)
		{
			return (haystack + i);
		}
		else
		{
			i++;
			y = 0;
		}
	}
	return (0);
}
