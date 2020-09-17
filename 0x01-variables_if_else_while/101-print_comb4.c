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

	for (number = 0; number < 10; number++)
	{
		for (numberTwo = 0; numberTwo < 10; numberTwo++)
		{
			for (numberThree = 0; numberThree < 10; numberThree++)
			{
				if (number == numberTwo || numberTwo == numberThree)
				{
				}
				else if (number > numberTwo || numberTwo > numberThree)
				{
				}
				else
				{
					putchar(number + '0');
					putchar(numberTwo + '0');
					putchar(numberThree + '0');
					if (number == 7 && numberTwo == 8 && numberThree == 9)
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
