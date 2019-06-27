#include "holberton.h"
/**
 * _isdigit - Entry point
 * Return: 1 if the value is a digit and 0 in otherwise
 * @c: is the Argument of the function
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
