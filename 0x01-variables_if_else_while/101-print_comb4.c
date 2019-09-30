#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 on success.
 */
int main(void)
{
	int first, second, third;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second < 10; second++)
		{
			for (third = 0; third < 10; third++)
			{
				if (first < second && second < third)
				{
					putchar(first + '0');
					putchar(second + '0');
					putchar(third + '0');
					if (first != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
