#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: (0)
 */
int main(int argc, char **argv)
{
		int i = 0;

		while (i < argc)
			printf("%s\n", argv[i++]);
		return (0);
}
