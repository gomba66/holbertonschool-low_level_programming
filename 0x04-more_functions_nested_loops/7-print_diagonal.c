#include "holberton.h"
/**
 * print_diagonal - Entry point
 * This function do that according to the number joined,
 * print spaces and in the-
 * -final line put a slash character
 * Return: No return, only print
 * @n: This is a value of user
 */
void print_diagonal(int n)
{
	int x;
	int y;

	x = 0;
	if (n > 0)
	{
		while (x < n)
		{
			y = 0;
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			_putchar(92);
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
