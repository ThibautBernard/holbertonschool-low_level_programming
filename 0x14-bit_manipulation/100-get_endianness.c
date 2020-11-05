#include "holberton.h"

/**
 * get_endianness - check the endianness of
 * memory
 * Return: 1 if little endian else 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *)&i;

	if (*ptr == 1)
		return (1);
	return (0);
}
