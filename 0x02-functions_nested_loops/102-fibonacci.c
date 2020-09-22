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

	for (i = 1; i < 50; i++)
	{
		printf("%d, ", i + (i - 1));
	}
	printf("\n");

	for (y = 2; y < 50; y++)
	{
		printf("%d, ", y + (y - 1));
	}

	printf("\n");
	return (0);
}
