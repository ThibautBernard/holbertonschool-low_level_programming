#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonal sum 2d array
 * @a: array given
 * @size: size of row and column
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int row, column, sum = 0, sum2 = 0, cl = 0, rw = 0;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (row == column)
			{
				sum = sum + *(a + (row * size + column));
			}
		}
	}
	for (cl = size; cl > 0; cl--)
	{
		for (rw = size; rw > 0; rw--)
		{
			if (rw == cl)
			{
				sum2 = sum2 + *(a + (rw * size - cl));
			}
		}
	}
	printf("%d, %d\n", sum, sum2);
}
