#include "holberton.h"
/**
 * calcul - calcul the prime number with i
 * @n: the number
 * @i: index to % number
 * Return: 0 if not, 1 otherwise
 */
int calcul(int n, int i)
{
		if (i == 1)
			return (1);
		if (n % i == 0)
			return (0);
		return (calcul(n, i - 1));
}
/**
 * is_prime_number - return if is a prime number
 * @n: integer given
 * Return: 0 if not prime, 1
 */
int is_prime_number(int n)
{
		if (n <= 1)
			return (0);
		return (calcul(n, n / 2));
}
