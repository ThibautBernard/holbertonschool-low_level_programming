#include "holberton.h"

/**
 * print_line - print underscore or \n
 * only if n > 0, otherwise a \n printed
 * @n: integer
 * Return: underscore printed in n length or \n
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
