#include <stdio.h>

/**
 * main - entry poiunt
 * Return: sum of multipe of 3 and 5 until 1024
 */
int main(void)
{
	int sum;
	int sum2;
	int i;
	int y;

	printf("%d, ", 1);
	for (i = 1; i < 50; i++)
	{
		sum = i;
		printf("%d, ", sum + i);
	}
	printf("\n");

	printf("%d, ", 2);
	for (y = 2; y < 50; y++)
	{
		sum2 = y;
		printf("%d, ", sum2 + y);
	}

	printf("\n");
	return (0);
}
