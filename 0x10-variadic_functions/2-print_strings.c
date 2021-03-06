#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: to separate numbers
 * @n: number of arguments to print
 * Return: print string or nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (separator != NULL && i + 1 != n)
			printf("%s%s", s, separator);
		else if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(args);
}
