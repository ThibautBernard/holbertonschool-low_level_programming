#include "holberton.h"
/**
 * set_bit - set 1 to the index of n
 * @n: unsigned int
 * @index: the index of bit
 * Return: new number or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
