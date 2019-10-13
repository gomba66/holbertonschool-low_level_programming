#include "holberton.h"
#include <stdio.h>
/**
 * print_number - This is a function that prints a number
 * @n: Number that we need to print.
 */
void print_number(int n)
{
	unsigned long int i = 1, digit = 1, power = 1;
	unsigned long int numchar, number = n;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		number = n;
	}
	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	while (i < digit)
	{
		power = power * 10;
		i++;
	}
	while (power >= 1)
	{
		numchar = (n / power) % 10;
		_putchar(numchar + '0');
		power = power / 10;
	}
}
