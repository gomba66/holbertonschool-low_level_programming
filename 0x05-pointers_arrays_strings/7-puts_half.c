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

	while (*str != '\0')
	{
		str++;
		x++;
	}

	if (x % 2 == 0)
	{
		y = x;
		x = x + 1;
		x = x / 2;

		while (x < y)
		{
			_putchar(x + '0');
			x++;
		}
	}
	else
	{
		x = x / 2;
		y = 0;

		while (y <= x)
		{
			_putchar(y + '0');
			y++;
		}
	}
	_putchar('\n');
}
