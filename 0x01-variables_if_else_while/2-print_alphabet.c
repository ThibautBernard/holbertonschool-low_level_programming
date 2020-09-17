#include <stdio.h>

/**
 * main - enter point
 * Return: 0(Success)
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		putchar(alphab);
	}
	putchar('\n');
	return (0);
}
