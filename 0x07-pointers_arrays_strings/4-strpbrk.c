#include "holberton.h"
/**
 * _strpbrk - Entry point
 * @s: first string
 * @accept: second string
 * Return: s[i]
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int x;

	while (*(s + i))
	{
		for (x = 0; *(accept + x); x++)
		{
			if (*(s + i) == accept[x])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (0);
}
