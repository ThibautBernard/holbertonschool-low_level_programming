#include "holberton.h"
/**
 * calc - calcul the square roots of n
 * @n1: factor 1
 * @n2: factor 2
 * @n: the number
 * Return: the square roots or -1
 */
int calc(int n1, int n2, int n)
{
		if ((n1 * n2) == n)
			return (n1);
		if (n1 * n2 > n)
			return (-1);
		return (calc(n1 + 1, n2 + 1, n));
}
/**
 * _sqrt_recursion - return the square or -1
 * @n: the number
 * Return: the square roots or -1
 */
int _sqrt_recursion(int n)
{
		return (calc(1, 1, n));
}
