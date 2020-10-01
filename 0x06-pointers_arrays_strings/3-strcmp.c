#include "holberton.h"
/**
 * _strcmp - compare two string
 * @s1: string compare to s2
 * @s2: string compared with s1
 * Return: negative number, positive, 0
 */
int _strcmp(char *s1, char *s2)
{
	int length1 = 0, length2 = 0;

	length1 = s1[0];
	length2 = s2[0];
	if (length1 < length2)
		return (-15);
	else if (length1 == length2)
		return (0);
	else
		return (15);
}
