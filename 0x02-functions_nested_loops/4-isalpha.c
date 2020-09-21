#include "holberton.h"

/**
 * _isalpha - check if is a letter, upcase or Uppercase
 * @c: int checked
 * Return: 1 if letter is letter, upcase or lower, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
