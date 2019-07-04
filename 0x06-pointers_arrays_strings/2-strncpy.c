#include "holberton.h"
/**
 * _strncpy - Entry point
 * @dest: with this value, the program replace the spaces with asteriscs
 * @src: with this value, the program receive the string
 * @n: with this value, the program know how much positions should be print
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
