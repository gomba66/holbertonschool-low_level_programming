#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * This is a function that concatenate two strings using a extra condition
 *
 * Return: a pointer with the two strings concatenated.
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes that should print (of the second string).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int a = 1;
	int b = 1;
	int tot = 0;

	while (s1[i] != '\0')
	{
		i++;
		a++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		b++;
	}
	if(b == n)
	{
		
	}

	i = 0;
	tot = a + b;
	*p = malloc(sizeof(char) * tot);
	if (p == '\0')
	{
		return('\0');
	}
	while (p[i] != '\0')
	{
		if (s1[i] != '\0')
		{
			p[i] = s1[i];
		}//
		else if (
		{
			p[i] = s2[i];
		}
		i++;
	}
	return(p);
}
