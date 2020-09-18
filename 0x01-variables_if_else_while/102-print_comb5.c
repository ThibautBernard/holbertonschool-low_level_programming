#include <stdio.h>

/**
 * main - enter point
 * Return: 0(Success)
 */
int main(void)
{
	int number;
	int numberTwo;

	while (number <= 99)
	{
		numberTwo = number + 1;
		while (numberTwo <= 99)
		{
			if (number != numberTwo || number < numberTwo)
			{
				putchar(number / 10 + '0');
				putchar(number % 10 + '0');
				putchar(' ');
				putchar(numberTwo / 10 + '0');
				putchar(numberTwo % 10 + '0');
				if (number < 98 && numberTwo < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			numberTwo++;
		}
		number++;
	}
	putchar('\n');
	return (0);
}
