#include "holberton.h"
/**
 * _strcat - Entry point
 * @dest: First string.
 * @src: Second string.
 * Return: a string contatenated of the both strings.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
