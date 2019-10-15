#include "holberton.h"
/**
 * _strspn - Entry point
 * This is a function that get the length of a prefix substring
 * @s: this is an array.
 * @accept: this is the second array
 * Return: b.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, a = 0, b = 0;

	while (accept[i] != '\0')
	{
		a = 0;
		while (s[a] != '\0')
		{
			if(s[a] == accept[i] && i < a)
				b++;
			a++;
		}
		i++;
	}
	return (b);
}
