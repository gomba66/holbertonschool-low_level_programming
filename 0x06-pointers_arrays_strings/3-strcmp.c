#include "holberton.h"
/**
 * _strcmp - Entry point
 * @s1: This is the first string
 * @s2: This is the second string
 * Return: result from the rest of s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((char) (*s1) - (char)(*s2));
}
