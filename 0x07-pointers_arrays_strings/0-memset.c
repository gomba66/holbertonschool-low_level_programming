#include "holberton.h"
/**
 * _memset - Entry point
 * This is a function for fill memory with a constant byte.
 * @s: This is the buffer.
 * @b: This is the value that to be replaced
 * @n: This is the amount of times that the value will be replaced
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
