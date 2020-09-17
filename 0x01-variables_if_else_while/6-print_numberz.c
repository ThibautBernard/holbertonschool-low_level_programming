#include <stdio.h>

/**
 * main - enter point
 * Return: 0(Success)
 */
int main(void)
{
	int integer;

	for (integer = 0; integer < 10; integer++)
	{
		putchar(integer + '0');
	}
	putchar('\n');
	return (0);
}
