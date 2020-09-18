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

	for (number = 0; number <= 9; number++)
	{
		for (numberTwo = 0; numberTwo <= 9; numberTwo++)
		{
			for (numberThree = 0; numberThree <= 9; numberThree++)
			{
				for (numberFour = 0; numberFour <= 9; numberFour++)
				{
					if ((number + numberTwo) == (numberThree + numberFour))
					{
					}
					else if ((number + numberTwo) > (numberThree + numberFour))
					{
					}
					else
					{
						putchar(number + '0');
						putchar(numberTwo + '0');
						putchar(' ');
						putchar(numberThree + '0');
						putchar(numberFour + '0');
						if ((number + numberTwo) == 17 && (numberThree + numberFour) == 18)
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
	}
	putchar('\n');
	return (0);
}
