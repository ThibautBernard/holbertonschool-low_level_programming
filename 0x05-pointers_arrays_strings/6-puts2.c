#include "holberton.h"

/**
 * puts2 - print only pair entry from thestring
 * @str: string given
 * Return: only the pair
 */
void puts2(char *str)
{
	int i, y, length;

	for (y = 0; *(str + y) != '\0'; y++)
		length++;
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

