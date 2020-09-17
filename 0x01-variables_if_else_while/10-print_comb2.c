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
			putchar(number + '0');
			putchar(numberTwo + '0');
			if (numberTwo == 9 && number == 9)
			{
				numberTwo++;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
