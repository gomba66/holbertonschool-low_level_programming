#include "holberton.h"
/**
 * calc - Entry point
 * @n: This is the entry from main
 * @i: This is the iterator
 * Return: i or calc function
 */
int calc(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i > n / 2)
	{
		return (-1);
	}
	else
	{
		return (calc(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Entry point
 * @n: this is the value from the calc function
 * Return: return sqrt
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (calc(n, i));
}
