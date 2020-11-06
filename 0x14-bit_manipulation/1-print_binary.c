#include "holberton.h"
/**
 * _pow_recursion - number pow
 * @x: number given
 * @y: power
 * Return: number
 */
unsigned long int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x,  y - 1));
	}
	return (1);
}
/**
 * print_binary - print binary of n
 * @n: unsigned int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int counter = 0;

	while (_pow_recursion(2, i) <= n)
	{
		counter++;
		i++;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		counter--;
		for (; counter >= 0; counter--)
		{
			_putchar('0' + ((n >> counter) & 1));
		}
	}
}
