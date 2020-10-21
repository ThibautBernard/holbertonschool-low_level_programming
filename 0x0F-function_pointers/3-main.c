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
	int argv1 = 0, argv2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	argv1 = atoi(argv[1]);
	argv2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv1 == 0 || argv2 == 0) && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(argv1, argv2));
	return (0);
}
