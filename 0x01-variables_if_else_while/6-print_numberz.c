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
	int numberz = '0';

	while (numberz <= '9')
	{
		putchar(numberz);
		numberz++;
	}
	putchar('\n');
	return (0);
}
