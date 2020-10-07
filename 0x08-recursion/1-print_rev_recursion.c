#include "holberton.h"
/**
 * _print_rev_recursion - print reverse string recursively
 * @s: the string given
 * Return: the string reverse
 */
void _print_rev_recursion(char *s)
{
	if (!(*s == '\0'))
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
