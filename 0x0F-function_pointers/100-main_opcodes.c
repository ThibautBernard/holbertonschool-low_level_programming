#include "3-calc.h"
#include <stdlib.h>

/**
 * main - filter and call function
 * @argc: nb of arguments given
 * @argv: arguments given
 * Return: 0 && value
 */
int main(int argc, char *argv[])
{
	int argv1 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	argv1 = atoi(argv[1]);
	if (argv1 < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
