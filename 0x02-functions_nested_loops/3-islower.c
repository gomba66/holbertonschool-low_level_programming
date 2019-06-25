#include "holberton.h"
/**
 * _islower - Entry point
 * Return: 1 if the letter is lowercase and 0 otherwise
 * Check if a letter is lowercase on the ASCII table
 * @c: character of ASCII table
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
