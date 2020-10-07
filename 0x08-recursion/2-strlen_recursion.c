#include "holberton.h"
/**
 * _strlen_recursion - length of a string recursively
 * @s: the string given
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s != '\0')
	{
		counter++;
		s++;
		return (counter + _strlen_recursion(s));
	}
	return (counter);
}
