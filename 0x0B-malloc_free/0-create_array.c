#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * This is a function that create an array of chars.
 * @size: This is the size of array.
 * @c: This is a char
 * Return: NULL if the size is 0, otherwise a pointer to the array, or NULL
 * if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size > 0)
	{
		p = malloc(sizeof(char) * size);
		if (p == '\0')
		{
			return ('\0');
		}
		else
		{
			while (i < size)
			{
				p[i] = c;
				i++;
			}
			return (p);
		}
	}
	else
	{
		return ('\0');
	}

}
