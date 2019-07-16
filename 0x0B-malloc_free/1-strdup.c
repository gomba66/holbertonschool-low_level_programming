#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Entry point
 * This is a program for copy a string and return the copy
 * Return: Copy of a string.
 * @str: string.
 */
char *_strdup(char *str)
{
	int i = 0;
	int n = 1;
	char *x;

	if (str == '\0')
	{
		return ('\0');
	}
	else
	{
		while (str[i] != '\0')
		{
			n++;
			i++;
		}

		i = 0;

		x = malloc(sizeof(char) * n);
		if (x == '\0')
		{
			return ('\0');
		}
		else
		{
			while (i < n)
			{
				x[i] = str[i];
				i++;
			}
			return (x);
		}
		free(x);
	}
}
