#include <stdio.h>

/**
 * main - entry poiunt
 * Return: sum of multipe of 3 and 5 until 1024
 */
int main(void)
{
	int sum;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 ==  0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
