#include "holberton.h"
/**
 * reverse_array - reverse array of int
 * @a: array of integer
 * @n: length of the array
 * Return: array of integer reversed
 */
void reverse_array(int *a, int n)
{
	int i, y, tmp;
	int *ptr;

	ptr = a;
	for (y = 0; y < n - 1; y++)
		ptr++;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = *ptr;
		*ptr = tmp;
		ptr--;
	}
}
