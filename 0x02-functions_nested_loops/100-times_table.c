#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - Entry point
 * @n: number of times for print the table
 */

void print_times_table(int n)
{
	int op1, op2, res, dig1, dig2, dig3;
	if (n > 0 && n < 15)
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
					putchar(dig1 + '0');
					putchar(dig2 + '0');
					putchar(dig3 + '0');
				}
				else if (res > 9)
				{
					dig1 = res / 10;
					dig2 = res % 10;
					putchar(dig1 + '0');
					putchar(dig2 + '0');
				}
				else
					putchar(res + '0');
				if (op2 < n)
				{
					putchar(',');
				}
				if ((op1) * (op2 + 1) < 10 && op2 < n)
				{
					putchar(' ');
					putchar(' ');
					putchar(' ');
				}
				else if (((op1) * (op2 + 1) > 9 && ((op1) * (op2 + 1) < (100)) && (op2 < n)))
				{
					putchar(' ');
					putchar(' ');
				}
				else if ((op1) * (op2 + 1) > 99 && op2 < n)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
