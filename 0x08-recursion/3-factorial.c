#include "holberton.h"
/**
 * factorial - Entry point
 * This is a function for print the factorial of a number
 * @n: This is the number that join from main.
 * Return: -1 if the function is less than 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
