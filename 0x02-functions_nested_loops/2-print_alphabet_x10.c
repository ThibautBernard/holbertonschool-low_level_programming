#include "holberton.h"


/**
 * print_alphabet_x10 - order from a to z ten times
 * Return: ten times alphabet
 */
void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		print_alphabet();
	}
}
