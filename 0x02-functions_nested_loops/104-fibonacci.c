#include <stdio.h>

/**
 * main - entry poiunt
 * Return: sum of even valued terms in the suit of fibonnaci
 */
int main(void)
{
	long int sum;
	long int lastNumber = 1;
	long int currentNumber = 1;
	int i;

	printf("%d, ", 1);
	for (i = 1; i <= 97; i++)
	{
		sum = lastNumber + currentNumber;
		printf("%ld", sum);
		if (i < 97)
		{
			printf(", ");
		}
		lastNumber = currentNumber;
		currentNumber = sum;
	}
	printf("\n");

	return (0);
}
