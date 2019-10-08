#include <stdio.h>
/**
 * main - Entry point
 * This is a program that prints the largest prime factor of a number
 * Return: 0 On success
 */
int main(void)
{
	unsigned long int number = 612852475143, prime = 2;

	while (number != 1)
	{
		if (number % prime == 0)
		{
			number = number / prime;
		}
		else
		{
			prime++;
		}
	}
	printf("%lu\n", prime);
	return (0);
}
