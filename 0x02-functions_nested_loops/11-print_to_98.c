#include "holberton.h"
#include <stdio.h>
int _putchar(char c);
/**
 * print_to_98 - listing number unless 98
 * @n: integer
 * Return: return all the number from n to 98
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
		printf("\n");

}
