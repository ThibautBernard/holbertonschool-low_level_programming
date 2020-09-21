#include "holberton.h"


void print_alphabet(void);
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

/**
 * main - entry
 * Return: 0(Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
