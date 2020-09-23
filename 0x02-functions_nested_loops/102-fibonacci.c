#include <stdio.h>

/**
 * main - entry poiunt
 * Return: sum of multipe of 3 and 5 until 1024
 */
int main(void)
{
	long long int sum;
	long long int lastNumber = 1;
	long long int currentNumber = 1;
	int i;

	printf("%d, ", 1);
	for (i = 1; i <= 50; i++)
	{
		sum = lastNumber + currentNumber;
		printf("%lld, ", sum);
		lastNumber = currentNumber;
		currentNumber = sum;
	}
	printf("\n");

	return (0);
}
