#include "holberton.h"
/**
 * _strchr - Entry point
 * This is a function that locate a character in a string
 * @s: is the string.
 * @c: the character.
 * Return: a pointer according to the condition
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return('\0');
}
