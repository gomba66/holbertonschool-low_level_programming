#include "holberton.h"
/**
 * times_table - Entry point
 *
 */

void times_table(void)
{
	int op1, op2, res, dig1, dig2;

	for (op1 = 0; op1 <= 9; op1++)
	{
		for (op2 = 0; op2 <= 9; op2++)
		{
			res = op1 * op2;
			if (res < 10)
			{
				_putchar(res + '0');
			}
			else
			{
				dig1 = res / 10;
				dig2 = res % 10;
				_putchar(dig1 + '0');
				_putchar(dig2 + '0');

			}
			if (op2 < 9)
			{
				_putchar(',');
				if ((op1) * (op2 + 1) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
