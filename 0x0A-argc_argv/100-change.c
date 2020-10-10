#include <stdio.h>
/**
 * minus - count the number of sign (- or + )
 * @c: char
 * Return: Return -1 if there is more sign '-'
 */
int minus(char *c)
{
	int sign = 1, i;

	for (i = 0; c[i] != '\0' ; i++)
	{
		if (c[i] == '-')
			sign *= -1;
		else if (c[i] >= '0' && c[i] <= '9')
			break;
	}
	return (sign);
}
/**
 * _atoi - convert char to int (only number)
 * @s: string given
 * Return: the int number
 */
int _atoi(char *s)
{
	int i, sign;
	int test = 0;

	sign = minus(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			test = test * 10 + sign * (s[i] - '0');
		else if (test > 0 && !(s[i] >= 0 && s[i] <= 9))
		{
			return (test);
		}
	}
	return (test);
}
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: (0)
 */
int main(int argc, char **argv)
{
		int i, y, sum = 0, tab[5] = {25, 10, 5, 2, 1};

		y = _atoi(*(argv + 1));
		if (y < 1)
		{
			printf("0\n");
			return (0);
		}
		if (argc != 2)
		{
			printf("Error \n");
			return (1);
		}
		else
		{
			i = 0;
			while (i < 5)
			{
				if (tab[i] > y)
					i++;
				else if (tab[i] % y == 0)
				{
					sum = sum + y / tab[i];
					printf("%d\n", sum);
					return (0);
				}
				else if (tab[i] % y != 0)
				{
					sum = sum + y / tab[i];
					y = y % tab[i];
				}
			}
			printf("%d\n", sum);
		}
		return (0);
}
