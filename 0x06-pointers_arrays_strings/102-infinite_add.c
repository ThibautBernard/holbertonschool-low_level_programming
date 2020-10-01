#include "holberton.h"

/**
 * rev_string - reverse the string
 * @s: string given
 * Return: string reversed
 */
void rev_string(char *s)
{
	int y, m, i, length;
	char *begin, *end, tmp;

	length = 0;
	for (y = 0; s[y] != '\0'; y++)
	{
		length++;
	}
	begin = s;
	end = s;
	for (m = 0; m < length - 1; m++)
		end++;
	for (i = 0; i < length / 2; i++)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;
		begin++;
		end--;
	}
}
/**
 * carry - give a carry to add later in addition if y > 9
 * @y: int
 * Return: the carry to add
 */
int carry(int y)
{
	int carry = 0;

	if (y > 9)
		carry = y / 10;
	return (carry);
}
/**
 * zostrlen - give length
 * @s: string
 * Return: length
 */
int zostrlen(char *s)
{
	int i, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter++;
	return (counter);
}
/**
 * *infinite_add - addition to string of int
 * @n1: first string
 * @n2: second strig
 * @r: string with number additionned
 * @size_r: size of r
 * Return: nuber
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, res, first, second, cry = 0, l1, l2;

	l1 = zostrlen(n1) - 1;
	l2 = zostrlen(n2) - 1;
	i = 0;
	while (l1 >= 0 || l2 >= 0)
	{
		if (l1 >= 0 && l2 >= 0)
		{
			first = n1[l1] - '0';
			second = n2[l2] - '0';
			res = first + second + cry;
			cry = carry(res);
		}
		else if (l1 >= 0 && l2 < 0)
		{
			first = n1[l1] - '0';
			res = first + cry;
			cry = carry(res);
		}
		else if (l2 >= 0 && l1 < 0)
		{
			second = n2[l2] - '0';
			res = second + cry;
			cry = carry(res);
		}
		r[i] = res % 10 + '0';
		l1--;
		l2--;
		i++;
	}
	if (i < size_r - 1)
	{
		r[i] = cry + '0';
		r[i + 1] = '\0';
	}
	else
		return (0);
	rev_string(r);
	return (r);
}
