#include "holberton.h"
/**
 * times_table - Entry point
 *
 */

void times_table(void)
{
	int op1, op2, res;

	for (op1 = 0; op1 <= 9; op1++)
	{
		for(op2 = 0; op2 <= 9; op2++)
		{
			res = op1 * op2;
			if (res < 10)
			{
				if (res < 9 && res != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(res + '0');
				_putchar(',');
			}
			else
			{
				_putchar((res/10) + '0');
				_putchar((res%10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
