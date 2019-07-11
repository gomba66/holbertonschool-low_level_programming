#include "holberton.h"
/**
 * wildcmp - Entry point
 * This is a function for comparate 2 strings
 * @s1: Is the first string
 * @s2: Is the second string
 * Return: If the strings be identical 1, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 == '\0')
	{
		return (0);
	}
	else if (s2 == '\0')
	{
		return (1);
	}
	return (0);
}
