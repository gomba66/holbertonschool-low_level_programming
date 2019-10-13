#include "holberton.h"
/**
 * leet - function that replace some letters with numbers
 * @s: String that will changed.
 * Return: a string modified.
 */
char *leet(char *s)
{
	int i = 0, y = 0;
	char *llow = "aeotl";
	char *lup = "AEOTL";
	char *rep = "43071";

	while (s[i] != '\0')
	{
		y = 0;
		while (llow[y] != '\0' || lup[y] != '\0')
		{
			if (s[i] == llow[y] || s[i] == lup[y])
			{
				s[i] = rep[y];
			}
			y++;
		}
		i++;
	}
	return (s);
}
