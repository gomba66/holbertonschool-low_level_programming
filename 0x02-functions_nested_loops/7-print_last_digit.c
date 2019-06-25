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
		n  = ((n % 10) * -1);
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
}
