#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - count length of a string
 * @s: pointer char
 * Return: the length of the string given
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;
	return (count);
}

int main(int argc, char *argv[])
{
	int i, y, z, res_multi = 0, rest = 0, l = 0, m = 0, length_s1 = 0, length_s2 = 0;
	int *arr;
	char *s1, *s2;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3)
		return (0);
	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);
	arr = malloc(sizeof(int) * length_s2 + length_s1);
	for (i = length_s2 - 1; i >= 0; i--)
	{
		m = 0;
		rest = 0;
		for (y = length_s1 - 1; y >= 0; y--)
		{
	    res_multi = (s1[y] - '0') * (s2[i] - '0') + rest + arr[l + m];
			arr[l + m] = res_multi % 10;
			rest = res_multi / 10;
			m++;
		}
		if (rest > 0)
		{
			arr[l + m] += rest;
		}
		l++;
	}
	z = length_s2 + length_s1 - 1;
	for (;z >= 1;)
	{
		z--;
		printf("%d", arr[z]);
	}
	printf("\n");
	return (0);
}
