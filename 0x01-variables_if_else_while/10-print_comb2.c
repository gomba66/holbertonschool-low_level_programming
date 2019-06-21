#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1;
	int dig2;

	while (dig1 < 10)
	{
		while (dig2 < 10)
		{
			putchar(dig1 + '0');
			putchar(dig2 + '0');

				if (dig1 < 9 || dig2 < 9)
				{
					putchar(',');
					putchar(' ');
				}
			dig2++;
		}
		dig1++;
		dig2 = 0;
	}
	putchar('\n');
	return (0);
}
