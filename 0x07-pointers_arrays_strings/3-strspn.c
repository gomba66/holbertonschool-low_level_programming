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
	int i = 0, a = 0, b = 0, status = 0, z = 0;


	while (s[i] != '\0' && status == 0)
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (accept[a] == s[i])
			{
				b++;
			}
			a++;
		}
		z = i + 1;
		if (b != z)
			status = 1;
		else
			status = 0;
		i++;
	}
	return (b);
}
