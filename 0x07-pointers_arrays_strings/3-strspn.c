#include "holberton.h"
/**
 * _strspn - length of string if first char is match with accept
 * @s: string pointed to
 * @accept: pattern of strign to match with s
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, y, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[i] == accept[y])
			{
				if (s[i] == accept[y] && counter == i)
				{
					counter++;
				}
			}
		}
	}
	return (counter);
}
