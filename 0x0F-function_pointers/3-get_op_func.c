#include "3-calc.h"
/**
 * get_op_func - pointer of functino
 * that search in the array if string given equal
 * to one of the array and return the pointer to
 * the function needed
 * @s: string given (+, -..)
 * Return: pointer to the function needed or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (s[0] != *ops[i].op && i < 5)
	{
		i++;
		if (i == 5 || *(s + 1) != '\0')
			return (NULL);
	}
	return (ops[i].f);
}
