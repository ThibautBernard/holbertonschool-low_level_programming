#include <stdio.h>

/**
 * main - enter point
 * Return: 0(Success)
 */
int main(void)
{
	int number;
	int numberTwo;
	int numberThree;
	int numberFour;

	for (number = 0; number < 10; number++)
	{
		for (numberTwo = 0; numberTwo < 10; numberTwo++)
		{
			for (numberThree = 0; numberThree < 10; numberThree++)
			{
				for (numberFour = 0; numberFour < 10; numberFour++)
				{
					putchar(number + '0');
					putchar(numberTwo + '0');
					putchar(' ');
					putchar(numberThree + '0');
					putchar(numberFour + '0');
					if (number == 9 && numberTwo == 9 && numberThree == numberFour)
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
	}
	putchar('\n');
	return (0);
}
