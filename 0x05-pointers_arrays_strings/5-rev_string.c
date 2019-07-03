#include "holberton.h"
/**
 * rev_string - Entry point
 * This is a function for put a string in reverse from memory
 * @s: This is a string that join in the function
 */
void rev_string(char *s)
{
	int x, y;
	char i[1000];

	while (s[x] != '\0')
	{
		x++;
		y++;
	}
	y--;
	while (y != -1)
	{
		x++;
		i = s[y];
		y--;
	}
}
