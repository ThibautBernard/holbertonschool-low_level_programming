#include "holberton.h"

/**
 * _strlen - count length of a string
 * @s: pointer char
 * Return: the length of the string given
 */
int _strlen(const char *s)
{
	int i, count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	return (count);
}
/**
 * _pow_recursion - number pow
 * @x: number given
 * @y: power
 * Return: number
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x,  y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (1);
}
/**
 * binary_to_uint - convert  binary to unint
 * @b: string of binary
 * Return: sum in decimal or 0 if other
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length_b = 0, i, sum = 0, counter = 0;

	if (b == NULL)
		return (0);
	length_b = _strlen(b);
	i = length_b;
	while (i--)
	{
		if (b[i] == '1')
			sum += _pow_recursion(2, counter);
		if (b[i] != '0' && b[i] != '1')
			return (0);
		counter++;
	}
	return (sum);
}
