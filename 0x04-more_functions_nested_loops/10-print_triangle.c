#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - print triangle
 * @size: integer
 * Return: return a triangle in function of the size
 */
void print_triangle(int size)
{
	int y, i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		y = 0;
		while (y < size)
		{
			for (i = 0; i < size - y; i++)
			{
				if (i > 0)
					_putchar(' ');
			}
			for (k = size; k >= size - y; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
			y++;
		}
	}
}
