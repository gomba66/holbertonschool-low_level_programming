#include "holberton.h"
/**
 * _isupper - Entry point
 * Return: 1 if c is uppercase and 0 in otherwise
 * @c: Argunment of function
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
