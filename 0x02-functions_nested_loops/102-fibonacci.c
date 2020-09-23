#include <stdio.h>

/**
 * main - entry poiunt
 * Return: sum of multipe of 3 and 5 until 1024
 */
int main(void)
{
	long int sum;
	long int lastNumber = 1;
	long int currentNumber = 1;
	int i;

	printf("%d, ", 1);
	for (i = 1; i <= 49; i++)
	{
		sum = lastNumber + currentNumber;
		printf("%ld, ", sum);
		lastNumber = currentNumber;
		currentNumber = sum;
	}
	printf("\n");

	return (0);
}
