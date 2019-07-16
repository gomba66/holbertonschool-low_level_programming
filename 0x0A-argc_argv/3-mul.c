#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * This program is for print the multiplication of two numbers
 * Return: Result of multiplication
 * @argc:The number of strings
 * @argv:The strings
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int mul = a * b;

		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
