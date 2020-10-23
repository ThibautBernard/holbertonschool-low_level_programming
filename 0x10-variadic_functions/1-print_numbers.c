#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print number given in param and add separator between
 * @separator: to separate numbers
 * @n: number of arguments to print
 * Return: number or nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			if (separator != NULL && i + 1 != n)
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d", va_arg(args, int));
		}
		printf("\n");
		va_end(args);
	}
	va_end(args);
}
