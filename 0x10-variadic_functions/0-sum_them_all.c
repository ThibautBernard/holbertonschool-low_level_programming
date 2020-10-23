#include "variadic_functions.h"

/**
 * sum_them_all - sum of arguments given
 * @n: number of param to count
 * Return: 0 or SUM
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
	va_end(args);
	return (0);
}
