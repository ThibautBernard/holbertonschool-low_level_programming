#include "holberton.h"

/**
 * puts_half - print second part of a string if is pair
 * @str: string given
 * Return: second part string or last char if impair
 */
void puts_half(char *str)
{
	int i, y, length;

	length = 0;
	for (y = 0; *(str + y) != '\0'; y++)
		length++;
	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		_putchar(str[length - 1 / 2]);
	}
	_putchar('\n');
}

