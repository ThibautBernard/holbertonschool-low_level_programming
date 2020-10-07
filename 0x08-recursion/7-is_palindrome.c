#include "holberton.h"
#include <stdio.h>
/**
 * strln - length of string
 * @s: the string
 * Return: the length
 */
int strln(char *s)
{
		int counter = 0;

		if (*s != '\0')
		{
			counter++;
			return (counter + strln(s + 1));
		}
		return (counter);
}

/**
 * calcul - check the string if its palindrome
 * @s: the string
 * @y: the length
 * @i: the start
 * Return: 1 if its true or 0 if not palindrome
 */
int calcul(char *s, int y, int i)
{
	if (i == y || (i == y - 1 && s[i] == s[y]))
		return (1);
	if (s[i] == s[y])
		return (calcul(s, y - 1, i + 1));
	return (0);

}
/**
 * is_palindrome - return the function calcul
 * @s: the string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
		int length = 0;

		length = strln(s);
		return (calcul(s, length - 1, 0));
}
