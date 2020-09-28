#include "holberton.h"

/**
 * _puts - print string to stdout
 * @str: string given
 * Return: the string to stdout
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

