#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print value in function of param given et %
 * @format: the string to parse
 * Return: value
 */
void print_all(const char * const format, ...)
{
	int i;
	const char *str;
	va_list args;

	str = format;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
			}
			if (format[i + 1] != '\0')
				printf(", ");
			i++;
		}
		printf("\n");
		va_end(args);
}
