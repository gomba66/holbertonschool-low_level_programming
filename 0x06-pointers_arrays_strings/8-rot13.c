#include "holberton.h"
/**
 * rot13 - Function replaces each letter by its partner 13
 * characters further along the alphabet.
 *
 * @s: string that will be replaced.
 * Return: A string in format rot13.
 */
char *rot13(char *s)
{
	char *alpha =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 =  "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
