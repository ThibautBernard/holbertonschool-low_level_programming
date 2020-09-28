#include "holberton.h"

/**
 * print_rev - reverse a string
 * @s: string given
 * Return: reverse the string
 */
void print_rev(char *s)
{
	int i, y, length;

	for (y = 0; *(s + y) != '\0'; y++)
		length++;
	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

