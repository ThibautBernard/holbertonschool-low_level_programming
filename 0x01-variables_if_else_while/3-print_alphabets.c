#include <stdio.h>

/**
 * main - enter point
 * Return: 0(Success)
 */
int main(void)
{
	char alphab;
	char alphaUp;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		putchar(alphab);
	}
	for (alphaUp = 'A'; alphaUp <= 'Z'; alphaUp++)
	{
		putchar(alphaUp);
	}
	putchar('\n');
	return (0);
}
