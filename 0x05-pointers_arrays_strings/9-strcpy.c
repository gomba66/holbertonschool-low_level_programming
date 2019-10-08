#include "holberton.h"
/**
 * _strcpy - Function that copy a string and returns the copy
 * Using pointers
 * @dest: Variable where will stored the copy.
 * @src: Original string that will copied.
 * Return: dest, copy of the string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, cp = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (cp <= i)
	{
		dest[cp] = src[cp];
		cp++;
	}
	return (dest);
}
