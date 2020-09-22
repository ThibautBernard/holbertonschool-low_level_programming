#include "holberton.h"

int _putchar(char c);

/**
 * jack_bauer - display 24 hours
 * Return: 24 hours
 */
void jack_bauer(void)
{
	int y;
	int c;

	y = 0;
	while (y <= 23)
	{
		c = 0;
		while (c <= 59)
		{
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar(':');
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar('\n');
			c++;
		}
		y++;
	}
}

