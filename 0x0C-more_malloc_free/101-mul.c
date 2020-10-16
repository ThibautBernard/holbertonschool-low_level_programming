#include "holberton.h"
#include <stdlib.h>
/**
 * _puts - print string to stdout
 * @str: string given
 * Return: the string to stdout
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
/**
 * *_memset - fill memory in n range
 * @s: string pointed to
 * @b: char constant at replace
 * @n: number
 * Return: the memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, no;

	no = n;
	for (i = 0; i < no; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
/**
 * *_calloc - allocate array and fill with 0
 * @nmemb: length of the array
 * @size: length of bytes of each element of the array
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, size * nmemb);
	return (arr);
}
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
/**
 * _check_digit - check if there is number in one string
 * @s1: first string to check
 * @s2: second string to check
 * @length_s1: length of s1
 * @length_s2: length of s2
 * Return: 0 if only number, 1 if other than number
 */
int _check_digit(char *s1, char *s2, int length_s1, int length_s2)
{
	int i;

	for (i = 0; i < length_s1; i++)
	{
		if (!(s1[i] >= '0' && s1[i] <= '9'))
		{
			return (1);
		}
	}
	for (i = 0; i < length_s2; i++)
	{
		if (!(s2[i] >= '0' && s2[i] <= '9'))
		{
			return (1);
		}
	}
	return (0);
}
/**
 * _check_nb_arg - check number of arguments
 * @argc: number of arguments
 * Return: nothing except error
 */
void _check_nb_arg(int argc)
{
		if (argc != 3)
		{
			_puts("Error");
			exit(98);
		}
}
/**
 * print_array - print arr from the end to the start if number
 * @arr: array given
 * @length: length of the arr
 * Return: nothing except value of array
 */
void print_array(int *arr, int length)
{
	int i;

	i = length;
	for (; arr[i] == 0; i--)
	{
	}
	for (; i >= 0; i--)
		_putchar(arr[i] + '0');
	_putchar('\n');

}
/**
 * main - multiply 2 number given
 * @argc: number of arguments given
 * @argv: arguments content
 * Return: Value
 */
int main(int argc, char *argv[])
{
	int i, y, z, res_multi = 0, rest = 0, l = 0;
	int *arr, m = 0, length_s1 = 0, length_s2 = 0;
	char *s1, *s2;

	s1 = argv[1];
	s2 = argv[2];
	_check_nb_arg(argc);
	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);
	if (_check_digit(s1, s2, length_s1, length_s2) == 1)
	{
		_puts("Error");
		exit(98);
	}
	arr = _calloc((length_s2 + length_s1), sizeof(int));
	for (i = length_s2 - 1; i >= 0; i--)
	{
		m = 0;
		rest = 0;
		for (y = length_s1 - 1; y >= 0; y--)
		{
			if ((s1[y] - '0') == 0 && (s2[i] - '0') == 0)
				_putchar('0' + 0);
			res_multi = (s1[y] - '0') * (s2[i] - '0') + rest + arr[l + m];
			arr[l + m] = res_multi % 10;
			rest = res_multi / 10;
			m++;
		}
		if (rest > 0)
			arr[l + m] += rest;
		l++;
	}
	z = length_s2 + length_s1 - 1;
	print_array(arr, z);
	free(arr);
	return (0);
}
