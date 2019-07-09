#include "holberton.h"
/**
 * _strstr - Entry point
 * @haystack: the char for print
 * @needle: null character or needle
 * Return: return a variable
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (needle[i] != haystack[i])
				break;
		}
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (0);
}
