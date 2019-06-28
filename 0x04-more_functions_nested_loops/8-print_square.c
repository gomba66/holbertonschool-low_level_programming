#include "holberton.h"
/**
 * print_square - Entry point
 * This is a program for print a square
 * Return: No return, but print squares in screen
 * @size: is the variable from user
 */
void print_square(int size)
{
	int horizontal;
	int vertical;

	if (size > 0)
	{
		for (vertical = 0; vertical < size; vertical++)
		{
			for (horizontal = 0; horizontal < size; horizontal++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
