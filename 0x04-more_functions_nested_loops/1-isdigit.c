#include "holberton.h"

/**
 * _isdigit - check the parameter given if is a digit or not
 * @c: integer
 * Return: return 1 if the param is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
