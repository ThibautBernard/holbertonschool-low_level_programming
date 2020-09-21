#include "holberton.h"

/**
 * print_alphabet - order from a to z
 * Return: alphab
 */
void print_alphabet(void)
{
	char alphab;

	alphab = 'a';
	while (alphab <= 'z')
	{
		_putchar(alphab);
		alphab++;
	}
	_putchar('\n');
}

