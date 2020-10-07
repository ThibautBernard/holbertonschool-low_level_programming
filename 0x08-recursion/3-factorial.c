#include "holberton.h"
/**
 * factorial - factor number
 * @n: number
 * Return: the factor of n
 */
int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
		return (-1);
	return (1);
}
