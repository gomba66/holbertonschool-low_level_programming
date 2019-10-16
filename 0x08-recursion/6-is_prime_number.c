#include "holberton.h"
/**
 * is_prime - Function fot to know if a number is prime
 * @n: number.
 * @c: iterator.
 * Return: 1 if the number is prime, 0 in otherwise.
 */
int prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}
/**
 * is_prime_number - Function for to know if a number is prime.
 * @n: Number.
 * Return: 1 if the number is prime, 0 in otherwise.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
