#include "holberton.h"
/**
 * _strncat - Entry point
 * @dest: is the first string that join as parameter
 * @src: is the second string that join as parameter
 * @n: is the mount of bytes declarated as parameter
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[a] != '\0' && n > 0)
	{
		dest[i] = src[a];
		a++;
		i++;
		n--;
	}

	return (dest);
}
