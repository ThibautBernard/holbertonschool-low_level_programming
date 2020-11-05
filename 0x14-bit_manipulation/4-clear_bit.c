#include "holberton.h"
/**
 * clear_bit - set to 0 a bit
 * @n: unsigned int
 * @index: the index of bit
 * Return: 1 if succed, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 63)
		return (-1);
	x = ~(1 << index);
	*n &= x;
	return (1);
}
