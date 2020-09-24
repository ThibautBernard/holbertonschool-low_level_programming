#include <stdio.h>

/**
 * main - entry point
 * print 1 to 100 except multiple of 3 & 5 || multiple  3 + 5
 * Return: number or Fizz || buzz || FizzBuzz
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
