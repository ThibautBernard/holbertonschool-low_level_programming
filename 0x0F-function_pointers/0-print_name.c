#include "function_pointers.h"
/**
 * print_name - function that print name with pointer function
 * @name: string to print
 * @f: pointer of function in arguments given
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
