#include "holberton.h"
/**
 * print_last_digit - Entry point
 * This is a function for print the last digit of each number
 * Return: n - value of the last digit
 * @n: - variable of the function
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int x;

		x = n * -1;
		x = x % 10;
		_putchar(x + '0');
		return (x);
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
}
