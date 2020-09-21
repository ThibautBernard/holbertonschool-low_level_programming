#include "holberton.h"

/**
 * _islower - check if c is lower
 * @c: int checked
 * Return: 1 if lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
