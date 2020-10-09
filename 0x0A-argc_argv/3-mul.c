#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: (0)
 */
int main(int argc, char **argv)
{
		int y, i;

		if (argc < 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			y = atoi(*(argv + 1));
			i = atoi(*(argv + 2));
			printf("%d\n", y * i);
		}
		return (0);
}
