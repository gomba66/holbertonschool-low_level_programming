#include "holberton.h"
/**
 * print_rev - Entry point
 * This is a function for print the string in reverse
 * @s: Is the string that join to program
 */
void print_rev(char *s)
{
	int x = 0;
	int y = 0;

	while (s[x] != '\0')
	{
		y++;
		x++;
	}
	y--;
	while (y != -1)
	{
		_putchar(s[y]);
		y--;
	}
	_putchar('\n');
}
