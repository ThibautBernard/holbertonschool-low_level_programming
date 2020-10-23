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

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			if (separator != NULL && i + 1 != n)
				printf("%s%s", va_arg(args, char *), separator);
			else if (args == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(args, char *));
		}
			printf("\n");
		va_end(args);
	}
	va_end(args);
}
