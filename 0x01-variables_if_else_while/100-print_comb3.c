#include <stdio.h>

/**
 * main - enter point
 * Return: 0(Success)
 */
int main(void)
{
	int number;
	int numberTwo;

	for (number = 0; number < 10; number++)
	{
		for (numberTwo = 0; numberTwo < 10; numberTwo++)
		{
			if (numberTwo == number || number > numberTwo)
			{
			}
			else
			{
				putchar(number + '0');
				putchar(numberTwo + '0');
				if (number == 8 && numberTwo == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
