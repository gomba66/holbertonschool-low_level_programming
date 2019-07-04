#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - Entry point
 * @dest: is a first parameter
 * @src: is the second parameter
 * Return: "dest" variable
 */
char *_strcat(char *dest, char *src)
{
	int z = 0;
	char *new = dest;

	while (*new != '\0')
	{
		z++;
		new++;
	}

	int i = 0;
	char *new2 = src;
	int a = z;
	int b = 0;

	while (*new2 != '\0')
	{
		dest[a] = src[b];
		i++;
		new2++;
		b++;
		a++;
	}
	return (dest);
}
