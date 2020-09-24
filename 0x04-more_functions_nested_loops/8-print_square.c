#include "holberton.h"

/**
 * print_square - print a square
 * @size: integer
 * Return: a square of # in function of size
 */
void print_square(int size)
{
	int i, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		y = 0;
		while (y < size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			y++;
		}
	}
}
