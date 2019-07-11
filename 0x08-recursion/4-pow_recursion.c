#include "holberton.h"
/**
 * _pow_recursion - Entry point
 * This is a function for print the value of X raised to the power of Y
 * @x: Is the value that join from the main
 * @y: Is the elevation number.
 * Return: -1 if Y is iqual to 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
