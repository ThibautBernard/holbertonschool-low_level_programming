#include "holberton.h"

int _putchar(char c);

/**
 * print_last_digit - return last digit
 * @y: int checked
 * Return: last digit
 */
int print_last_digit(int y)
{
	_putchar(y % 10 + '0');
	return (y % 10);
}

