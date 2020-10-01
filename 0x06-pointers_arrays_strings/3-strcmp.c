#include "holberton.h"
/**
 * _strcmp - compare two string
 * @s1: string compare to s2
 * @s2: string compared with s1
 * Return: negative number, positive, 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, y, length1 = 0, length2 = 0;

	for (y = 0; s1[y] != '\0'; y++)
		length1++;
	for (i = 0; s2[i] != '\0'; i++)
		length2++;
	if (length1 < length2)
		return (-15);
	else if (length1 == length2)
		return (0);
	else
		return (15);
}
