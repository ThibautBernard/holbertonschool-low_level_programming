#include "holberton.h"

int _putchar(char c);

/**
 * comma - display commas if variable is not equal to 9
 * @y: int variable
 * Return: one comma and one space
 */
void comma(int y)
{
	if (y != 9)
	{
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * times_table - display table of 9x9
 * Return: table organized
 */
void times_table(void)
{
	int i;
	int y;

	for (i = 0; i <= 9; i++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ((i * y) < 10)
			{
				if (y != 0)
				{
					_putchar(' ');
				}
				_putchar((i * y) % 10 + '0');
				comma(y);
			}
			else
			{
				_putchar((i * y) / 10 + '0');
				_putchar((i * y) % 10 + '0');
				comma(y);
			}
		}
		_putchar('\n');
	}
}

