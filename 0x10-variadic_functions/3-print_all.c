#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_ch - print a char
 * @i: type
 * Return: Nothing
 */
void print_ch(va_list i)
{
	printf("%c", va_arg(i, int));
}
/**
 * print_in - print integer
 * @i: type
 * Return: nothing
 */
void print_in(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_f - print a float
 * @i: type
 * Return: nothing
 */
void print_f(va_list i)
{
	printf("%f", va_arg(i, double));
}
/**
 * print_s - print a string
 * @i: type
 * Return: nothing
 */
void print_s(va_list i)
{
	char *ptr = va_arg(i, char *);

	if (ptr == NULL)
		ptr = "(nil)";
	printf("%s", ptr);
}
/**
 * print_all - print value in function of param given et %
 * @format: the string to parse
 * Return: value
 */
void print_all(const char * const format, ...)
{
	int i, y;
	char *sep = "";
	va_list args;
	tpy ops[] = {
	{"c", print_ch},
	{"i", print_in},
	{"f", print_f},
	{"s", print_s},
	{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		y = 0;
		while (ops[y].op != NULL)
		{
			if (format[i] == *ops[y].op)
			{
				printf("%s", sep);
				ops[y].f(args);
				sep = ", ";
			}
			y++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
