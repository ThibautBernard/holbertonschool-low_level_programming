#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: string given
 * Return: reverse the string
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

