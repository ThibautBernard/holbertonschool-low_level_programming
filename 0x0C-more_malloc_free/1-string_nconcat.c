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
 * *string_nconcat - concat 2 string in function of n
 * @s1: first string copy
 * @s2: second string to copy in function of n
 * @n: number of s2 to copy
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, y = 0, length_s1 = 0, length_s2 = 0;
	char *str;

	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);
	if (length_s1 > 0 || length_s2 > 0)
	{
		if (n > length_s2 || (n == length_s2))
			str = malloc(sizeof(char) * (length_s1 + length_s2 + 1));
		else if (length_s1 > 0 && length_s2 == 0)
			str = malloc(sizeof(char) * (length_s1 + 1));
		else
			str = malloc(sizeof(char) * (length_s1 + n + 1));
		if (str == NULL)
			return (NULL);
		for (i = 0; i < length_s1; i++)
			str[i] = s1[i];
		if (n > length_s2 || (n == length_s2))
		{
			for (; i < length_s1 + length_s2; i++)
			{
				str[i] = s2[y];
				y++;
			}
		}
		else
		{
			for (; i < (length_s1 + n); i++)
			{
				str[i] = s2[y];
				y++;
			}
		}
		str[i] = '\0';
	}
	return (str);
}
