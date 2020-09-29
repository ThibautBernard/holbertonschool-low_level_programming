#include "holberton.h"
/**
 * minus - count the number of sign (- or + )
 * @c: char
 * Return: Return -1 if there is more sign '-'
 */
int minus(char *c)
{
	int sign, plus = 0, low = 0, i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '-')
			low++;
		else if (c[i] == '+')
			plus++;
		else if (c[i] >= '0' && c[i] <= '9')
			break;
	}
	if (low > plus)
		sign = -1;
	else
		sign = +1;
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
			test = ((test * 10) + (sign * (s[i] - '0')));
		else if (test > 0 && !(s[i] >= 0 && s[i] <= 9))
		{
			return (test);
		}
	}
	return (test);
}
