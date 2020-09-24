#include "holberton.h"

/**
 * print_diagonal - print '\' in function of n
 * @n: integer
 * Return: pyramid of '\'
 */
void print_diagonal(int n)
{
	int i, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		y = 0;
		while (y < n)
		{
			for (i = 0; i <= y; i++)
			{
				if (i > 0)
					_putchar(' ');	
				if (i == y)
					_putchar('\\');
			}
			_putchar('\n');
			y++;
		}
	}
}
