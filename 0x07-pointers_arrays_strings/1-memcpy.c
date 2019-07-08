#include "holberton.h"
/**
 * _memcpy - Entry point
 * This is a function that copies n bytes from memory area src to memory area
 * dest.
 * @dest: is the result of copy.
 * @src: is the area of origin.
 * @n: bytes from memory.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
