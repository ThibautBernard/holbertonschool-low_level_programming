#include "holberton.h"

/**
 * count_bits - count number of bits after
 * xor operation
 * @n: unsigned int
 * Return: number of bits flipped
 */
unsigned int count_bits(unsigned long int n)
{
	int i = 0;

	while (n > 0)
	{
		i++;
		n &= (n - 1);
	}
	return (i);
}
/**
 * flip_bits - count number of bits to flip to
 * get the other number
 * @n: unsigned int
 * @m: unsigned int
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n ^ m;

	return (count_bits(tmp));
}
