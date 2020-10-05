#include "holberton.h"
/**
 * *_strpbrk - pointing on the first occurence
 * @s: string pointed to
 * @accept: pattern of strign to match with s
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, y;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[i] == accept[y])
			{
				s = s + i;
				return (s);
			}
		}
	}
	return (NULL);
}
