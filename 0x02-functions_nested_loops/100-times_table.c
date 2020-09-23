#include "holberton.h"

int _putchar(char c);

/**
 * conditionLoop - check the value of 2 integer and print something different
 * @n: value from counter first loop * the second
 * @counterSecondLoop: counter from the second loop
 * Return: multiple space and value of n, if function of his value
 */
void conditionLoop(int n, int counterSecondLoop)
{
	int value;

	value = 0;
	if (n < 10)
	{
		if (counterSecondLoop != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(n % 10 + '0');
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 1000)
	{
		_putchar(' ');
		value = n / 10;
		_putchar(value / 10 + '0');
		_putchar(value % 10 + '0');
		_putchar(n % 10 + '0');
	}
}

/**
 * print_times_table - display times tables in function of n given
 * @n: integer given for the max size of the table
 * Return: table organized
 */
void print_times_table(int n)
{
	int i;
	int y;
	int counter;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (y = 0; y <= n; y++)
			{
				counter = (i * y);
				conditionLoop(counter, y);
				if (y != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
