#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	unsigned int long n1 = 0, n2 = 1, count = 0, fib = 1;

	while (count < 100)
	{
		fib = n1 + n2;
		if (fib % 2 == 0 && fib < 4000000)
			printf("%lu", fib);
		if (count < 49 && (fib % 2 == 0 && fib < 3524578))
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
