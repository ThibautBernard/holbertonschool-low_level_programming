#include "holberton.h"

/**
 * swap_int - switch value int
 * @a: pointer
 * @b: pointer
 * Return: swap value
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
