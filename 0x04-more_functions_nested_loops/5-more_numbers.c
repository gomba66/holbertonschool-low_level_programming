#include "holberton.h"
/**
 * more_numbers - Entry point
 * This is a function for print 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i = 0;
	int cont = 0;

	while (cont <= 9)
	{
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		i = 0;
		_putchar('\n');
		cont++;
	}
}
