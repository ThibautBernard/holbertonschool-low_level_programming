#include "holberton.h"
/**
 * _atoi - convert char to int (only number)
 * @s: string given
 * Return: the int number
 */
int _atoi(char *s)
{
	int i, plus = 0, low = 0;
	int test = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			test = (test * 10) + (s[i] - '0');
		else if (test > 0 && !(s[i] >= 0 && s[i] <= 9))
		{
			if (low > plus)
				test = test * -1;
			return (test);
		}
		else if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
				low++;
			else
				plus++;
		}
	}
	if (low > plus)
		test = test * -1;
	return (test);
}
