#include "holberton.h"
/**
 * jack_bauer - Entry point
 * This function prints each minute of the day of Jack Bauer
 * Return: each minute
 */

void jack_bauer(void)
{
	int dig1, dig2, dig3, dig4, cont = 0;

	for (dig1 = 0; dig1 <= 2 ; dig1++)
	{
		for (dig2 = 0; (dig2 <= 9) && (cont < 24); dig2++)
		{
			for (dig3 = 0; dig3 <= 5; dig3++)
			{
				for (dig4 = 0; dig4 <= 9; dig4++)
				{
					_putchar(dig1 + '0');
					_putchar(dig2 + '0');
					_putchar(':');
					_putchar(dig3 + '0');
					_putchar(dig4 + '0');
					_putchar('\n');
				}
			}
			cont++;
		}
	}
}
