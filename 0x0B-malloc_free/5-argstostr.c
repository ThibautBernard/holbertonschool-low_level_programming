#include "holberton.h"
#include <stdlib.h>
/**
 * *argstostr - concatene argv of main in one string
 * @ac: number of string
 * @av: array of parameters
 * Return: string concatene
 */
char *argstostr(int ac, char **av)
{
	int i = 0, y, z, counter = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		y = 0;
		while (av[i][y])
		{
			counter++;
			y++;
		}
		i++;
	}
	counter = counter + ac;
	str = malloc(sizeof(char) * (counter));
	if (str == NULL)
		return (NULL);
	i = 0;
	z = 0;
	while (i < ac)
	{
		y = 0;
		while (av[i][y])
		{
			*(str + z) = av[i][y];
			z++;
			y++;
		}
		if (i + 1 != ac)
			str[z++] = '\n';
		i++;
	}
	str[z + 1] = '\0';
	return (str);
}
