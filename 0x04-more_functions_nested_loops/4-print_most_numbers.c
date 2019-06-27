#include "holberton.h"
/**
 * print_most_numbers - Entry point
 * This function is for print the numbers from 0 to 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int i;
	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
