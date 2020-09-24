#include "holberton.h"

/**
 * more_numbers - print 10 times 0 to 14 without printf
 * only autorized to have 3 putchar in the function
 * Return: 10 times 0 to 14
 */
void more_numbers(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar((y / 10 % 10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
