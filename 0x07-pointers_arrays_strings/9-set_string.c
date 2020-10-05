#include "holberton.h"

/**
 * set_string - change adress to a pointer of pointer
 * @s: pointer of pointer
 * @to: pointer of string
 * Return: pointer of pointer adress changed
 */
void set_string(char **s, char *to)
{
	*s = *(&to);
}
