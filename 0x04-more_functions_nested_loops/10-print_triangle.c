#include "holberton.h"
/**
 * print_triangle - Entry point
 * This function do that according to the number joined,
 * print spaces and in the-
 * -final line put a slash character
 * Return: No return, only print
 * @size: This is a value of user
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < (size - (i + 1)))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
