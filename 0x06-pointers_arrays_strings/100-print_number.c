#include "holberton.h"
#include <stdio.h>
/**
 * print_number - print number only putchar
 * @n: the number to print
 * Return: number
 */
void print_number(int n)
{
	unsigned int number, power = 1;

	number = n;
	while (n / 10)
	{
		power = power * 10;
		n /= 10;
	}
	if (n < 0)
	{
		_putchar('-');
		number = number * -1;
	}
	while (power >  0)
	{
		if (!(power == 1))
		{
			_putchar((number / power) + '0');
			number = number - (power * (number / power));
		}
		else
			_putchar(number + '0');
		power /= 10;
	}
}
