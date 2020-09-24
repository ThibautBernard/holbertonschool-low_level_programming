#include "holberton.h"

/**
 * print_number - print number using putchar and recur
 * @n: integer value
 * Return: number original
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
