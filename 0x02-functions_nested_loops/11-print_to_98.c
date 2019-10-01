#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Function that print all natural numbers until 98
 * @n: Integer of start
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
				printf("%d\n", n);
			n++;
		}
	}

}
