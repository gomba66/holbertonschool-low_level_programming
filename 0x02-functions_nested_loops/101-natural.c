#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 On success.
 */
int main(void)
{
	int x = 0, sum = 0;
	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum = sum + x;
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
