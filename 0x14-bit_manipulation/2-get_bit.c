#include "holberton.h"

/**
 * _pow_recursion - number pow
 * @x: number given
 * @y: power
 * Return: number
 */
unsigned long int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x,  y - 1));
	}
	return (1);
}
/**
 * get_bit - get the binary number of index
 * to n
 * @n: unsigned int
 * @index: the index of bit
 * Return: bit number or error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter = 0, i = 0;

	while (_pow_recursion(2, i) <= n)
	{
		counter++;
		i++;
	}
	if (index >= counter)
		return (-1);
	return ((n >> index) & 1);
}
