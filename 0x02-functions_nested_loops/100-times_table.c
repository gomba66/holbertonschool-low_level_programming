#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - Entry point
 * @n: number of times for print the table
 */

void print_times_table(int n)
{
	int op1, op2, res;

	if (n > 0 && n < 15)
	{
		for (op1 = 0; op1 <= n; op1++)
		{
			for (op2 = 0; op2 <= n; op2++)
			{
				res = op1 * op2;
				printf("%d", res);

				if (op2 < n)
				{
					printf(",");
				}
				if ((op1) * (op2 + 1) < 10 && op2 < n)
				{
					printf("   ");
				}
				else if ((op1) * (op2 + 1) < 100 && op2 < n)
				{
					printf("  ");
				}
				else if (op2 < n)
					printf(" ");
			}
			printf("\n");
		}
	}
}
