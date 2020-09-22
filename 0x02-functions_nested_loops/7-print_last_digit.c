#include "holberton.h"

int _putchar(char c);

/**
 * print_last_digit - return last digit
 * @y: int checked
 * Return: last digit
 */
int print_last_digit(int y)
{
	int result = y % 10;

	if (result < 0)
	{
		_putchar((result * (-1)) + '0');
		return (result * (-1));
	}
	else
	{
		_putchar(result + '0');
		return (result);
	}
}

