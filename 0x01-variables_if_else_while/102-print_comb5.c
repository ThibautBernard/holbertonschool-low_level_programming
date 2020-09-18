#include <stdio.h>

/**
 * main - enter point
 * Return: 0(Success)
 */
int main(void)
{
	int number;
	int numberTwo;
	
	for (number = 0; number <= 99; number++)
	{
		for (numberTwo = 0; numberTwo <= 99; numberTwo++)
		{
			putchar(number/10 + '0');
			putchar(number%10 + '0');
		}
	}
	putchar('\n');
	return (0);
}
