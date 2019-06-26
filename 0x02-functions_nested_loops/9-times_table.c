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
			_putchar(res + '0');
			if (res >= 9)
			{
				_putchar((res/10) + '0');
				_putchar((res%10) + '0');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
