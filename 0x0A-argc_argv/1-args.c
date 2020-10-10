#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: (0)
 */
int main(int argc, char **argv)
{
		(void)argv;
		if (argc > 0)
			printf("%d\n", argc);
		return (0);
}
