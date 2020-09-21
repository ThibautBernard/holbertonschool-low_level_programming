#include "holberton.h"

int _putchar(char c);

/**
 * jack_bauer - display 24 hours
 * Return: 24 hours
 */
void jack_bauer(void)
{
	int mill;
	int cent;
	int diz;
	int unit;

	for (mill = 0; mill <= 2; mill++)
	{
		for (cent = 0; cent <= 3; cent++)
		{
			for (diz = 0; diz <= 5; diz++)
			{

				for (unit = 0; unit <= 9; unit++)
				{
					_putchar(mill + '0');
					_putchar(cent + '0');
					_putchar(':');
					_putchar(diz + '0');
					_putchar(unit  + '0');
					_putchar('\n');
				}
			}
		}
	}
}

