#include "holberton.h"
/**
 * print_numbers - Entry point
 * This function prints (with _putchar) the numbers from 0 to 9
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
