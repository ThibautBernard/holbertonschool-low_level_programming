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
		int y, z = 1, sum = 0;

		if (argc < 1)
		{
			printf("0\n");
		}
		else
		{
			while (z < argc)
			{
				if (**(argv + z) >= '0' && **(argv + z) <= '9')
				{
					y = atoi(*(argv + z));
					sum = sum + y;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
				z++;
			}
			printf("%d\n", sum);
		}
		return (0);
}
