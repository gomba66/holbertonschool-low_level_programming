#include "holberton.h"
/**
 * puts_half - Entry point
 * This is a function for print the second half of a string
 * @str: Is the parameter that join
 */

void puts_half(char *str)
{
	int x = 0;
	int y = 0;

	while (str != '\0')
	{
		str++;
		x++;
	}
	y = x;
	if (x % 3 == 0)
	{
		x = x - 1;
		x = x / 2;

		while (x != y)
		{
			_putchar(str[x]);
			x++;
		}
	}
	else
	{
		x = x / 2;
		y = 0;

		while (y != x)
		{
			_putchar(str[y]);
			y++;
		}
	}
	_putchar('\n');
}
