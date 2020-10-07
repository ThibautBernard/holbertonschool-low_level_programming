#include "holberton.h"

/**
 * _puts_recursion - print string recursively
 * @s: the string given
 * Return: the string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
