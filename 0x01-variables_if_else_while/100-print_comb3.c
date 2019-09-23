#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 0 On success.
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			if (x < y)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (x < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
