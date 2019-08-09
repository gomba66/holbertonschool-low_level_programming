#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - Function that print a number decimal to binary
 * @n:Number in decimal.
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int x = 0, y = 0;

	if (n == 0)
	{
		return;
	}
	else
	{
		x = (n - ((n >> 1) * 2));
		y = (n >> 1);
		n = y;
		if (x == 1)
		{
			print_binary(n);
			_putchar('1');
		}
		else if (x == 0)
		{
			print_binary(n);
			_putchar('0');
		}
	}
}
