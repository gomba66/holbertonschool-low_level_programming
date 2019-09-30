#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 On success!.
 */
int main(void)
{
	int first, second, ffd, fld, sfd, sld;

	for (first = 0; first <= 99; first++)
	{
		for (second = 0; second <= 99; second++)
		{
			ffd = first / 10;
			fld = first % 10;
			sfd = second / 10;
			sld = second % 10;
			if (first < second)
			{
				putchar(ffd + '0');
				putchar(fld + '0');
				putchar(' ');
				putchar(sfd + '0');
				putchar(sld + '0');
				if (first != 98 || second != 99)
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
