#include "holberton.h"
/**
 * print_rev - Entry point
 * This is a function for print the string in reverse
 * @s: Is the string that join to program
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x = x - 1;
	while (x != -1)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
