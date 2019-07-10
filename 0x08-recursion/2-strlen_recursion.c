#include "holberton.h"
/**
 * _strlen_recursion - Entry point
 * This is a function for return the number of characters of a string.
 * @s: This is a string
 * Return: Number of characters
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return(0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
