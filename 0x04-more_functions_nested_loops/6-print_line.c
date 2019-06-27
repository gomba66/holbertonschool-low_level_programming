#include "holberton.h"
/**
 * print_line - Entry point
 * This function do that according to the number joined, print underlines
 * Return: underlines according to the number.
 * @n: variable that receives the digit of user
 */
void print_line(int n)
{
	int inicio;
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (inicio = 0; inicio != n; inicio++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
