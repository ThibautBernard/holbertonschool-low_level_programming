#include "holberton.h"
/**
 * *leet - convert letter in number
 * @s: string
 * Return: converted string
 */
char *leet(char *s)
{
	int i, y;
	char num[12] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char letter[12] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; letter[y] != '\0'; y++)
		{
			if (s[i] == letter[y])
				s[i] = num[y];
		}
	}
	return (s);
}
