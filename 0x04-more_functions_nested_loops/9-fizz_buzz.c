#include <stdio.h>
/**
 * main - Entry point
 * This is a program for print Fizz and Buzz
 * Return: 0 when the program finish
 */
int main(void)
{
	int num1 = 1;

	while (num1 <= 100)
	{
		if (num1 % 3 == 0 && num1 % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num1 % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num1 % 5 == 0 && num1 == 100)
		{
			printf("Buzz");
		}
		else if (num1 % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num1);
		}
		num1++;
	}
	printf("\n");
	return (0);
}
