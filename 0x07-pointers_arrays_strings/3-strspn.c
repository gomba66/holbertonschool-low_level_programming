#include "holberton.h"
/**
 * _strspn - Entry point
 * This is a function that get the length of a prefix substring
 * @s: this is an array.
 * @accept: this is the second array
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, a;
	int b = 0;

	while (s[i] > 0)
	{
		while (accept[a])
		{
			if (s[i] == accept[a])
			{
				b++;
			}
			a++;
		}
		i++;
		if (i > b)
		{
			break;
		}
	}
	return (b);
}
