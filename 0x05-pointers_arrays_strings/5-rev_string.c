#include "holberton.h"
/**
 * rev_string - Entry point
 * This is a function for put a string in reverse from memory
 * @s: This is a string that join in the function
 */
void rev_string(char *s)
{
	int i = 0, y;
	char newstr[1000];
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	y = i;
	i = 0;
	while (y != -1)
	{
	       newstr[i] = s[y];
	       y--;
	       i++;
	}
	newstr[i] = '\0';
	y = 0;
	while (newstr[y] != '\0')
	{
		s[y] = newstr[y];
		y++;
	}
}
