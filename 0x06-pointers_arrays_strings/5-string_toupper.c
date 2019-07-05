#include "holberton.h"
/**
 * string_toupper - Entry point
 * This is a function for change the lowercase to uppercase
 * @s: this is the string that join and return
 * Return: s - string
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
