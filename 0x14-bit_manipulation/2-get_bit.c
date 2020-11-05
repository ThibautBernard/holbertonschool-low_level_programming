#include "holberton.h"

/**
 * get_bit - get the binary number of index
 * to n
 * @n: unsigned int
 * @index: the index of bit
 * Return: bit number or error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (((n >> index) & 1));
}
