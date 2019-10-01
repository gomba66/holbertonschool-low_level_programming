#include "holberton.h"
/**
 * print_times_table - Entry point
 * @n: number of times for print the table
 */
void print_times_table(int n)
{
	int op1, op2, res, dig1, dig2, dig3, xres;

	if (n >= 0 && n < 15)
	{
		for (op1 = 0; op1 <= n; op1++)
		{
			for (op2 = 0; op2 <= n; op2++)
			{
				res = op1 * op2;
				if (res > 99)
				{
					dig1 = res / 10;
					dig2 = dig1 % 10;
					dig1 = dig1 / 10;
					dig3 = res % 10;
					_putchar(dig1 + '0');
					_putchar(dig2 + '0');
					_putchar(dig3 + '0');
				}
				else if (res > 9)
				{
					dig1 = res / 10;
					dig2 = res % 10;
					_putchar(dig1 + '0');
					_putchar(dig2 + '0');
				}
				else
					_putchar(res + '0');
				xres = ((op1) * (op2 + 1));
				comas(op2, xres, n);
			}
			_putchar('\n');
		}
	}
}
/**
 * comas - Function for print the commas
 * @op2: Second operator.
 * @xres: Next result.
 * @n: Number of times that print the table.
 */
void comas(int op2, int xres, int n)
{
	if (op2 < n)
	{
		_putchar(',');
	}
	if (xres < 10 && op2 < n)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if (xres > 9 && (xres < (100)) && (op2 < n))
	{
		_putchar(' ');
		_putchar(' ');
	}
	else if (xres > 99 && op2 < n)
		_putchar(' ');
}
