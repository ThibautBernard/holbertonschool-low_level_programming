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
					y = _atoi(*(argv + z));
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
