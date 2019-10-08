#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	unsigned int long n1 = 1, n2 = 2, count = 0, fib = 1;

	printf("%lu, ", n1);
	printf("%lu, ", n2);
	while (count < 99)
	{
		fib = n1 + n2;
		printf("%lu", fib);
		if (count < 98)
		{
			printf(", ");
		}
		n1 = n2;
		n2 = fib;
		count++;
	}
	printf("\n");
	return (0);
}
