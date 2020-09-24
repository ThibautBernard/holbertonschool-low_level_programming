#include "holberton.h"

/**
 * _isupper - check the parameter given if upper or not
 * @c: integer
 * Return: return 1 if the param is a uppercase letter
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
